#ifndef MONSTERS_H_
#define MONSTERS_H_

char *monname(char m);
void addmonster(char ch, int r, int c, int quiescence);
void deletemonster(int r, int c);
void dumpmonster(void);
void sleepmonster(void);
void holdmonsters(void);
void wakemonster(int dir);
int seemonster(char *monster);
int seeawakemonster(char *monster);
int monsternum(char *monster);
void newmonsterlevel(void);
int isholder(char *monster);

#endif
