/*
 * Rog-O-Matic
 * Automatically exploring the dungeons of doom.
 *
 * Copyright(C) 2008 by Anthony Molinaro
 *
 * This file is part of Rog-O-Matic.
 *
 * Rog-O-Matic is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 *(at your option) any later version.
 *
 * Rog-O-Matic is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Rog-O-Matic.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GETROGUETOKEN_H__
#define __GETROGUETOKEN_H__

int rogue_log_open(const char *filename);
void rogue_log_close(void);
void rogue_log_write_command(char c);
void rogue_log_write_token(char ch);
void open_frogue_debuglog(const char *file);
void open_frogue_fd_debuglog(int frogue_fd_dl);
void close_frogue_debuglog(void);
void open_frogue(const char *file);
void open_frogue_fd(int frogue_fd);
void close_frogue(void);
static int matchnum(char ch);
static int fetchnum(char ch);
static int match2(char ch1, char ch2);
static int match3(char ch1, char ch2, char ch3);
static int match4(char ch1, char ch2, char ch3, char ch4);
static int match5(char ch1, char ch2, char ch3, char ch4, char ch5);
char getroguetoken(void);
int getoldcommand(char *s);
int getlogtoken(void);

#endif /* __GETROGUETOKEN_H__ */
