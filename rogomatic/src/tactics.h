#ifndef TACTICS_H_
#define TACTICS_H_

int handlearmor(void);
int handleweapon(void);
int quaffpotion(void);
int readscroll(void);
int handlering(void);
int findring(char *name);
int grope(int turns);
int findarrow(void);
int checkcango(int dir, int turns);
int godownstairs(int running);
int plunge(void);
int waitaround(void);
int goupstairs(int running);
int restup(void);
int gotowardsgoal(void);
int gotocorner(void);
int light(void);
int shootindark(void);
int dinnertime(void);
int trywand(void);
int eat(void);

#endif
