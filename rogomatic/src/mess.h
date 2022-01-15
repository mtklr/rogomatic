#ifndef MESS_H_
#define MESS_H_

void terpmes(void);
void parsemsg(char *mess, char *mend);
int smatch(char *dat, char *pat, char **res);
void readident(char *name);
void rampage(void);
void curseditem(void);
void infer(char *objname, stuff item_type);
void killed(char *monster);
void washit(char *monster);
void wasmissed(char *monster);
void didhit(void);
void didmiss(void);
void mshit(char *monster);
void msmiss(char *monster);
void countgold(char *amount);
void summary(FILE *f, char sep);
void versiondep(void);
int getmonhist(char *monster, int hitormiss);

#endif
