#ifndef ARMS_H_
#define ARMS_H_

int havearmor (int k, int print, int rustproof);
int armorclass (int i);
int haveweapon (int k, int print);
int weaponclass (int i);
int havering (int k, int print);
int ringclass (int i);
int havebow (int k, int print);
int bowclass (int i);
int havemissile (void);
int havearrow (void);
int hitbonus (int strength);
int damagebonus (int strength);
void setbonuses (void);

#endif
