#ifndef _SHELL_H
#define _SHELL_H
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#include <stdarg.h>
#include <ctype.h>

/*macros*/
#define COMMAND_MAX_LENGTH 128

/* Prototypes functions */
void showing_prompt(void);
void sani_print(const char *sms);
void reads_comand(char *comand, size_t sise);
void executes_comand(const char *comand);
/* void getting_input(comand, sizeof(comand)); */



#endif


