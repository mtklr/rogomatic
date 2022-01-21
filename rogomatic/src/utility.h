#ifndef UTILITY_H_
#define UTILITY_H_

int rogo_baudrate(void);
char *getname(void);
FILE *wopen(char *fname, char *mode);
int fexists(char *fn);
int filelength(char *f);
void critical(void);
void uncritical(void);
void reset_int(void);
void int_exit(void (*exitproc)());
int lock_file(const char *lokfil, int maxtime);
void unlock_file(const char *lokfil);
void quit(int code, char *fmt, ...);
int stlmatch(char *small, char *big);

#endif
