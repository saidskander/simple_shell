#include "MS.h"
/**
 * main - print on the next line
 *
 * Return: main.
 */
int main(void)
{
int w, d;
char  **cline;
ssize_t x = 0;
char *line = NULL;
size_t n = 0;
for (; x != -1;)
/* ctrl ^d */
{
_puts("$ ");
x = getline(&line, &n, stdin);
cline = cutline(line, " \n");
/*
for (i = 0; cline[i]; i++)
{
_puts("word number ");
_puts("\n");
_puts(cline[i]);
_puts("\n");
}
*/
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
return(0);
}
