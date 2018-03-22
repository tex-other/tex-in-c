extern int PASCAL_MAIN(int argc, char * *argv);
extern int initinc(int dummy);
extern int aopenin(FILE **f);
extern int aopenout(FILE **f);
extern int P_peek(FILE *f);
extern int P_eoln(FILE *f);
extern int open_fmt(FILE * * fmt,FILE * termout);

extern void fixdateandtime(long * tex_time_p,long * day_p, 
	long * month_p, long *year_p);

extern boolean inputln(FILE **f, boolean bypasseoln);

extern int str_pool_init(void);

extern void overflow(strnumber s, long n);
extern strnumber makestring(void);

extern int need_to_load_format;
