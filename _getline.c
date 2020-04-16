#include "MS.h"
/**
 * _getline - getline
 *Return: The line readed
*/
char *_getline()
{
int i = 0;
int bufsize = 1005;
int o;
char x = 0;
char *buf = malloc(sizeof(char) * bufsize);
/*alloc buf*/
if (buf == NULL)
{
return (NULL);
}
for (; x != EOF && x; i++)
/*for end of file*/
{
fflush(stdin);
o = read(STDIN_FILENO, &x, 1);
if (o == 0)
{
free(buf);
exit(EXIT_SUCCESS);
}
buf[i] = x;
if (buf[0] == '\n')
{
return (NULL);
}
if (i >= bufsize)
{
buf = _realloc(buf, bufsize, bufsize + 1005);
bufsize += 1005;
if (buf == NULL)
{
return (NULL);
}
}
}
buf[i] = '\0';
return (buf);
}
