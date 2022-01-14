#ifndef DEBUGLOG_H_
#define DEBUGLOG_H_

static void err_doit(int errnoflag, int error, const char *fmt, va_list ap);
void debuglog_open (const char *log);
void debuglog_close (void);
void debuglog (const char *fmt, ...);

#endif
