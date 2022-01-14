#ifndef DEBUG_H_
#define DEBUG_H_

int dwait ();
void promptforflags (void);
void dumpflags (int r, int c);
void timehistory (FILE *f, char sep);
void toggledebug (void);
int getscrpos (char *msg, int *r, int *c);

#endif
