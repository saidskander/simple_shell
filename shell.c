#include "MS.h"
/*
 * main - print on the next line
 *
 * Return: main.
 */
int main(void)
{
int w, d;
char **cline;
ssize_t x = 0;
char *line = NULL;
size_t n = 0;
signal(SIGINT, sighand);
for (; x != -1;)
/* ctrl ^d */
{
_puts("$ ");
x = getline(&line, &n, stdin);
cline = cutline(line, " \n");
if(cline[0] == NULL)
{
free(cline);
continue;
}
if((_strcmp(cline[0], "exit")) == 0)
{
free(line);
free(cline);
exit(0);
}
d = fork();
if (d == 0)
{
execve(cline[0], cline, environ);
exit(0);
}
wait(&w);
free(line);
free(cline);
line = NULL;
}
return (0);
}
void sighand(int sg)
{
if (sg == SIGINT)
_puts("\n$ ");
}
