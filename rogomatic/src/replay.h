#ifndef REPLAY_H_
#define REPLAY_H_

// right? wrong? good? bad?
struct levstruct;

void positionreplay (void);
int findlevel (FILE *f, struct levstruct *lvpos, int *nmlev, int maxnum);
void fillstruct (FILE *f, struct levstruct *lev);
int findmatch (FILE *f, char *s);

#endif
