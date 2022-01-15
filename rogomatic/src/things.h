#ifndef THINGS_H_
#define THINGS_H_

int wear(int obj);
int takeoff(void);
int wield(int obj);
int destroyjunk(int obj);
int drop(int obj);
int quaff(int obj);
int reads(int obj);
int point(int obj, int dir);
int throw(int obj, int dir);
int puton(int obj);
int removering(int obj);
void initstufflist(void);
void addstuff(char ch, int row, int col);
void deletestuff(int row, int col);
void dumpstuff(void);
void display(char *s);
char prepareident(int obj, int iscroll);
int pickident(void);
int unknown(stuff otype);
int unidentified(stuff otype);
int haveother(stuff otype, int other);
int have(stuff otype);
int havenamed(stuff otype, char *name);
int havewand(char *name);
int wearing(char *name);
int havemult(stuff otype, char *name, int count);
int haveminus(void);
int haveuseless(void);
int willrust(int obj);
int wielding(stuff otype);
int hungry(void);
int weak(void);
int fainting(void);
int havefood(int n);

#endif
