#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define filenamesize    40

extern char nameoffile[filenamesize];

static char my_buff[200];

extern char strpool[];

extern unsigned int strstart[];

extern unsigned int strptr;

extern char buffer[];

extern short last;

extern short first;

int pos=0, in_c_flag=0;

#define bufsize         500
char mybuff[bufsize];

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

void f_pool(int s)
{
	int j;
	if (s >= strptr || s< 0 )
		s=274;
	j = strstart[s];
        while (j < strstart[s + 1]) {
        	fputc(strpool[j],stderr);
        	j++;
        }
	fputc('\n',stderr);
	fflush(stderr);
}

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

void trimspaces()
{
	char * pp;
	memcpy(my_buff,nameoffile,filenamesize);
	my_buff[filenamesize]=0;
	my_buff[(pp=strchr(my_buff,' '))?pp-my_buff:filenamesize]=0;
	fprintf(stderr,my_buff);
}


int aopenin(FILE **f)
{
	char path_buff[512];
	char * * path_lst;
	char * path_dir;
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
