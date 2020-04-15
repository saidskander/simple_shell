#include "MS.h"
/**
 * cutline : catline
 * @line : line
 * @rep : rep
 * Return: array of words
*/
char **cutline(char *line, const char *rep)
{
char *word;
int i = 0;
char **ar;
/*array*/
ar = malloc(sizeof(char *) * 1024);
for (; i < 1024; i++)
ar[i] = NULL;
word = strtok(line, rep);
ar[0] = word;
i = 1;
for (; word; i++)
{
word = strtok(NULL, rep);
ar[i] = word;
}
return(ar);
}
