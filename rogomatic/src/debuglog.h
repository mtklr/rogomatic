#ifndef DEBUGLOG_H_
#define DEBUGLOG_H_

void debuglog_open (const char *log);
void debuglog_close (void);
void debuglog (const char *fmt, ...);

#endif
