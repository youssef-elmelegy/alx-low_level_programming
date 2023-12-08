#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>

/*****exec.c*****/
void execmd(char **argv);

/*****_fork.c*****/
int _fork(char **new_argv);

/*****_putchar.c.c*****/
int _putchar(char c);

/*****helper_string.c*****/
int str_length(char *string);
char *str_duplicate(char *string);

/*****prints_help.c*****/
int _print(char *string);

/*****main.c*****/
char **token(char **argv, char *getin, size_t size);

#endif
