#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

/*****exec.c*****/
void execmd(char **argv);

/*****_putchar.c.c*****/
int _putchar(char c);

/*****helper_string.c*****/
int str_length(char *string);

/*****prints_help.c*****/
int _print(char *string);

#endif
