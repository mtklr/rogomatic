#ifndef ROOMS_H_
#define ROOMS_H_

void newlevel (void);
void markmissingrooms (void);
int whichroom (int r, int c);
void nametrap (int traptype, int standingonit);
void findstairs (int notr, int notc);
int downright (int *drow, int *dcol);
int lightroom (void);
int darkroom (void);
void currentrectangle (void);
void clearcurrect (void);
void updateat (void);
void updatepos (char ch, int row, int col);
void teleport (void);
void mapinfer (void);
void markexplored (int row, int col);
void unmarkexplored (int row, int col);
int isexplored (int row, int col);
int haveexplored (int n);
void printexplored (void);
void inferhall (int r, int c);
void connectdoors (int r1, int c1, int r2, int c2);
int canbedoor (int deadr, int deadc);
int mazedoor (int row, int col);
int nextto (int type, int r, int c);
int nexttowall (int r, int c);
void dumpmazedoor (void);
void foundnew (void);

#endif
