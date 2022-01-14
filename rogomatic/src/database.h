#ifndef DATABASE_H_
#define DATABASE_H_

int findfake (char *string, stuff item_type);
int findentry (char *string);
char *findentry_getfakename (char *string, stuff item_type);
char *findentry_getrealname (char *string, stuff item_type);
void addobj (char *codename, int pack_index, stuff item_type);
void useobj (char *string);
void infername (char *codename, char *name, stuff item_type);
int used (char *codename);
int know (char *name);
char *realname (char *codename);
void dumpdatabase (void);

#endif
