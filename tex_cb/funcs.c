#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "tex.h"
#include "str.h"
#include "funcs.h"
#include "global.h"

static char my_buff[200];

int pos=0, in_c_flag=0;
int need_to_load_format=0;

#define mybufsize         500
char mybuff[mybufsize];

static char name_buf[mybufsize];
static int nlen;

void beginname(void)
{
	nlen=0;
	name_buf[0]=0;
}

int morename(int c)
{
	if ( c == ' ') return 0;
	if(nlen+1 < mybufsize) { 
		name_buf[nlen]=	c;
		name_buf[nlen+1]=0;
	}
	return 1;
}

void endname(void)
{
}
	
static char * format_name;

char * * font_path;
char * font_path_buf;
char * * input_path;
char * input_path_buf;
char * * format_path;
char * format_path_buf;

char * font_path_default[]={
"/usr/share/texmf/fonts/tfm/public/cm/",
"/usr/share/texmf/fonts/tfm/public/latex/",
"/usr/share/texmf/fonts/tfm/public/ae/",
"/usr/share/texmf/fonts/tfm/public/cmextra/",
"/usr/share/texmf/fonts/tfm/public/mflogo",
"/usr/share/texmf/fonts/tfm/public/misc/",
"/usr/share/texmf/fonts/tfm/ams/cmextra/",
"/usr/share/texmf/fonts/tfm/ams/cyrillic/",
"/usr/share/texmf/fonts/tfm/ams/euler/",
"/usr/share/texmf/fonts/tfm/ams/symbols/",
"/var/lib/texmf/tfm/public/plfonts/",
"/var/lib/texmf/tfm/jknappen/ec/",
"",
0};

char * p_path[]={"",0};

int initinc(int dummy)
{
	if(in_c_flag) {
		last=first; 
		memcpy(&(buffer[first]),mybuff,pos);
		last+=pos;
		return 1;
	} else { 
		return 0;
	}
}

void env_to_path(char * * * path, char * * buf, char * env_var)
{
	char * * my_path;
	char * my_path_buf;
         char * pp;
                int k;
                int i=strlen(env_var);
                my_path_buf=(char *)malloc(i+1);
                my_path=(char * *)malloc(sizeof(char *)*(i+2));
		if(!my_path_buf || !my_path) { 
			fprintf(stderr,"Out of memory\n");
			exit(11);
		}
                strcpy(my_path_buf,env_var);
                my_path[0]=pp=my_path_buf;
                k=1;
                while((pp=strchr(pp,':'))) {
                        *pp=0;
                        pp++;
                        my_path[k++]=pp;
                }
                my_path[k]=0;
		* path = my_path;
		* buf = my_path_buf;
}

int PASCAL_MAIN(int argc, char * *argv)
{
	char * pom;
	printf("%s\n",argv[0]);
	if((pom=getenv("TEXINPUTS"))) { 
		env_to_path(&input_path,&input_path_buf,pom);
	} else { 
	     input_path=p_path;
	}
	if((pom=getenv("TEXFONTS"))) { 
		env_to_path(&font_path,&font_path_buf,pom);
	} else { 
	     font_path=font_path_default;
	}
	if((pom=getenv("TEXFORMATS"))) { 
		env_to_path(&format_path,&format_path_buf,pom);
	} else { 
		format_path=p_path;
	}
	if(argc > 1 ) { 
		if(argv[1][0] == '&') {
			need_to_load_format=1;
			format_name = &(argv[1][1]);
			argv++;
			argc--;
		}
	}
	if(argc<=1) { 
		in_c_flag=0;
	} else { 
		int j=1;
		pos=0;
		for(;j<argc;j++) { 
			if(strlen(argv[j])+pos+3<bufsize) { 
				strcpy(&(mybuff[pos]),argv[j]);
				pos+=strlen(argv[j]);
				mybuff[pos++]=' ';
			}
		}
		pos--;
		if(pos>0) { 
			in_c_flag=1;
		}
	}
	return 0;
}

static int aopenin1(char * name, char * * path_lst, FILE **f);

int open_fmt(FILE * * fmt,FILE * termout)
{
	char * fmt_name;
	char name_buf[256]="plain.fmt";
	fmt_name=format_name;
	printf("%s\n",format_name);
	if(!strchr(format_name, '.')) { 
		if(strlen(format_name)+strlen(".fmt")<255) { 
			strcpy(name_buf, format_name);
			strcat(name_buf, ".fmt");
			fmt_name=name_buf;
		}
	}
	if(aopenin1(fmt_name,format_path,fmt)) { 
		return 1;
	} else { 	
	fprintf(termout, "Sorry, I can't find that format; will try PLAIN.\n");
	if (aopenin1("plain.fmt",format_path,fmt)) {

		return 1;
	} else {
	fprintf(termout, "I can't find the PLAIN format file!\n");
	return 0;
	}
	}
}

#if 0
int P_peek(FILE *f)
{
        int c=getc(f);
        ungetc(c,f);
        return c;
}

int P_eoln(FILE *f)
{
        int c=getc(f);
        ungetc(c,f);
        return (c=='\n')||(c==EOF);
}
#endif

void trimspaces(void)
{
	char * pp;
	memcpy(my_buff,nameoffile,filenamesize);
	my_buff[filenamesize]=0;
	my_buff[(pp=strchr(my_buff,' '))?pp-my_buff:filenamesize]=0;
	fprintf(stderr,my_buff);
}

static int aopenin1(char * name, char * * path_lst, FILE **f)
{
/* XXXX Fixed buffer size */
	char path_buff[512];
	char * path_dir;
	int ln=strlen(name);
        for(path_dir=*path_lst++;path_dir;path_dir=*path_lst++) {
		int lp= strlen(path_dir);
		if(lp>512-2-ln) break;
                strcpy(path_buff,path_dir);
		if(lp>0 && path_buff[lp-1] != '/') { 
			path_buff[lp]='/';
			path_buff[lp+1]=0;
		}
                strcat(path_buff,name);
            if(!*f)
                *f=fopen(path_buff,"rb");
            else
                *f=freopen(path_buff,"rb",*f);
            if(*f) return 1;
        }
        return *f!=0;
}

	

int aopenin(FILE **f)
{
/*	char path_buff[512]; */
	char * * path_lst;
/*	char * path_dir; */
	char * name;
	trimspaces();
	if (!strncmp(my_buff,"TeXfonts:",strlen("TeXfonts:"))) { 
		name = my_buff+strlen("TeXfonts:");
		path_lst=font_path;
	} else if(!strncmp(my_buff,"TeXinputs:",strlen("TeXinputs:"))) {
		name = my_buff+strlen("TeXinputs:");
		path_lst=input_path;
	} else if(!strncmp(my_buff,"TeXformats:",strlen("TeXformats:"))) {
		name = my_buff+strlen("TeXformats:");
		path_lst=format_path;
	} else { 
		name=my_buff;
		path_lst=p_path;
	}
	return aopenin1(name,path_lst,f);
/*
	for(path_dir=*path_lst++;path_dir;path_dir=*path_lst++) { 
		strcpy(path_buff,path_dir);
		strcat(path_buff,name);
	if(!*f) 
		*f=fopen(path_buff,"rb");
	else 
		*f=freopen(path_buff,"rb",*f);
	if(*f) return 1;
	}
	return *f!=0;
*/
}

int aopenout(FILE **f)
{
	trimspaces();
	if(!*f)
		*f=fopen(my_buff,"wb");
	else
		*f=freopen(my_buff,"wb",*f);
	return *f!=0;
}
