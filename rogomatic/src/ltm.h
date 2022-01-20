#ifndef LTM_H_
#define LTM_H_

void mapcharacter(char ch, char *str);
int addmonhist(char *monster);
int findmonster(char *monster);
void saveltm(int score);
void restoreltm(void);
void readltm(void);
void parsemonster(char *monster);
void clearltm(ltmrec *ltmarr);
void dumpmonstertable(void);
void analyzeltm(void);

#endif
