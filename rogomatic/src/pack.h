#ifndef PACK_H_
#define PACK_H_

char *itemstr (int i);
void dumpinv (FILE *f);
void removeinv (int pos);
void deleteinv (int pos);
void clearpack (int pos);
void rollpackup (int pos);
void rollpackdown (int pos);
void resetinv (void);
void doresetinv (void);
int inventory (char *msgstart, char *msgend);
void countpack (void);

#endif
