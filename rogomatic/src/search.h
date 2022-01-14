#ifndef SEARCH_H_
#define SEARCH_H_

int makemove (int movetype, int (*evalinit)(), int (*evaluate)(), int reevaluate);
int findmove (int movetype, int (*evalinit)(), int (*evaluate)(), int reevaluate);
int followmap (int movetype);
int validatemap (int movetype, int (*evalinit)(), int (*evaluate)());
void cancelmove (int movetype);
void setnewgoal (void);
int searchfrom (int row, int col, int (*evaluate)(), char dir[24][80], int *trow, int *tcol);
int searchto (int row, int col, int (*evaluate)(), char dir[24][80], int *trow, int *tcol);

#endif
