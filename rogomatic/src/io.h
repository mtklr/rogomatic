#ifndef IO_H_
#define IO_H_

extern int number1;
extern int number2;

void scrollup(void);
void scrolldown(void);
void printscreen(void);
void getrogue(char *waitstr, int onat);
void terpbot(void);
void dumpwalls(void);
void sendnow(char *f, ...);
void sendcnow(char c);
void rogo_send(char *f, ...);
int resend(void);
int pending(void);
void deadrogue(void);
void quitrogue(char *reason, int gld, int terminationtype);
void waitfor(char *mess);
void say(char *f, va_list ap);
void saynow(char *f, ...);
void waitforspace(void);
void givehelp(void);
void pauserogue(void);
void getrogver(void);
int charsavail(void);
void redrawscreen(void);
void toggleecho(void);
void clearsendqueue(void);
void startreplay(FILE **logf, char *logfname);
void putn(char c, FILE *f, int n);
void printsnap(FILE *f);
void dosnapshot(void);
void clearscreen(void);
char *statusline(void);

#endif
