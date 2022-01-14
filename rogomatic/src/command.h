#ifndef COMMAND_H_
#define COMMAND_H_

void move1 (int d);
void fmove (int d);
void rmove (int count, int d, int mode);
void mmove (int d, int mode);
void command ();
int commandcount (char *cmd);
char functionchar (char *cmd);
int functionesc (char *cmd);
char commandarg (char *cmd, int n);
void adjustpack (char *cmd);
void bumpsearchcount (void);
int replaycommand (void);
void showcommand (char *cmd);
void clearcommand (void);
void usemsg (char *str, int obj);

#endif
