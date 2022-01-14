#ifndef EXPLORE_H_
#define EXPLORE_H_

int genericinit (void);
int gotowards (int r, int c, int running);
int gotoinit (void);
int gotovalue (int r, int c, int depth, int *val, int *avd, int *cont);
int sleepvalue (int r, int c, int depth, int *val, int *avd, int *cont);
int wallkind (int r, int c);
int setpsd (int print);
int downvalue (int r, int c, int depth, int *val, int *avd, int *cont);
int expruninit (void);
int exprunvalue (int r, int c, int depth, int *val, int *avd, int *cont);
int expunpininit (void);
int expunpinvalue (int r, int c, int depth, int *val, int *avd, int *cont);
int runinit (void);
void runvalue (int r, int c, int depth, int *val, int *avd, int *cont);
int unpininit (void);
int rundoorinit (void);
void rundoorvalue (int r, int c, int depth, int *val, int *avd, int *cont);
int expinit (void);
int roominit (void);
int expvalue (int r, int c, int depth, int *val, int *avd, int *cont);
int zigzagvalue (int r, int c, int depth, int *val, int *avd, int *cont);
int secretinit (void);
int secretvalue (int r, int c, int depth, int *val, int *avd, int *cont);
void avoidmonsters (void);
void caddycorner (int r, int c, int d1, int d2, char ch);
void pinavoid (void);
int secret (void);
int findroom (void);
int exploreroom (void);
int doorexplore (void);
int safevalue (int r, int c, int depth, int *val, int *avd, int *cont);
int findsafe (void);
int avoid (void);
int archmonster (int m, int trns);
int archeryinit (void);
int archeryvalue (int r, int c, int depth, int *val, int *avd, int *cont);
void unrest (void);
int movetorest (void);
int restinit (void);
int restvalue (int r, int c, int depth, int *val, int *avd, int *cont);

#endif
