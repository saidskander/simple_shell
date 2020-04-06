#include "MS.h"
/**
 * main - print on the next line
 *
 * Return: main.
 */
int main(void)
{
ssize_t x = 0;
char *line = NULL;
size_t n = 0;
for (; x != -1;)
/* ctrl ^d */
{
_puts("> ");
x = getline(&line, &n, stdin);
_puts(line);
}
return(0);
}
