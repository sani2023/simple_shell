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
#define PATH_MAX_LENGTH 4096
#define PATH_SEPARATOR ":"
#define PROMPT "$"
#define MAX_TOKENS 1024
#define BUFFER_SIZE 1024

/* to_prompt.c */
void to_prompt(void);

/* get_d_input.c */
char *get_d_input(void);
void free_d_last_input(void);

/* get_d_line.c */
void *get_d_line(void);

/* to_buit_in_funct.c */
int to_check_d_builtin(char **arg);
int to_execute_d_builtin(char *comman, char **arg);
void shell_for_help(void);
void shell_for_exit(char **arg);
void shell_for_ckd(char **arg);
int shell_to_setenvi(char **arg);
int shell_to_envi(void);
int shell_to_unsetenvi(char **arg);
int shell_to_clear(char **arg);

/* signal_handling.c */
void handle_d_signaint(int signa);
void handle_d_signaquit(int signa);
void handle_d_signastp(int signa);

/* to_execute.c */
int to_execute(char **argv);

/* to_parse.c */
char **tokenizing(char *stn, const char *delimeter9);
char **tokenizing_inpute(char *inpute);

/* to_get_envi.c */
char *to_get_envi(const char *name9);

/* to_get_d_path.c */
char *to_get_d_path(void);

/* find_d_path.c */
char find_d_path(char *comman);

/* to_free.c */
void free_d_erro(char **argv, char *arg);
void free_d_tokn(char **point);
void free_d_path(void);

/* d_erro.c */
void _puts(char *stn);
void _puterro(char *erro);

/* to_util_func.c */
int string_len(const char *);
int string_comp(const char *g1, const char *g2);
int string_ncomp(const char *g1, const char *g2);
char *string_str(char *hack, char *needl);
char *string_char(char *t, char z);

/** to_util_func1.c */
char *string_cpy(char *, char *);
char *string_cat(char *, const char *);
char *string_up(const char *);
int _putchar(char);
unsigned int string_pn(char *g, char *acc);

/* to_util_func2.c */
int d_atoi(const char *stn);
char *d_mem_sett(char *x, int u, unsigned int m);
char *d_mem_copy(char *destin, char *sourc, unsigned int z);
void *to_realloc(void *, unsigned int, unsigned int);
void *to_calloc(unsigned int membn, unsigned int size9);

#endif


