#ifndef holberton_h
#define holberton_h

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

int _putchar(char c);

void _execve();

void _puts(char *str);

char **cutline(char *line, const char *rep);

extern char **environ;

int lsh_cd(char **args);

#endif
