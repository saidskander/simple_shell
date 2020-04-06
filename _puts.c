#include <unistd.h>
#include "MS.h"
/**
  * _puts - _puts
  * @str: str
  * Return: void
  */
void _puts(char *str)
{
int i = 0;
for (; *(str + i); i++)
{
_putchar(*(str + i));
}
}
