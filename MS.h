#ifndef MS_H
#define MS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
#include <stddef.h>
#include <sys/stat.h>
#include <signal.h>
#include <string.h>

int _strcmp(char *s1, char *s2);

void sighand(int sg);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

char *_getline();

int _putchar(char c);

void _puts(char *str);

char **cutline(char *line, const char *rep);

extern char **environ;

int lsh_cd(char **args);

#endif
