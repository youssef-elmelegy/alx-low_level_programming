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

/*****helper_string.c*****/
int str_length(char *string);
char *str_duplicate(char *string);
char *_strchr(const char *str, int c);
int _strncmp(const char *str1, const char *str2, size_t n);

/*****more_helper_string.c*****/
char *_strcpy(char *destination, const char *source);
char *_strcat(char *destination, const char *source);

/*****prints_help.c*****/
int _print(char *string);

/*****main.c*****/
char **token(char **argv, char *getin, size_t size);
char *get_loc(char *command);

/*****_getenv.c*****/
char *_getenv(const char *variable)

#endif
