#include "holberton.h"

/**
* print_rev - prints string in reverse
*
* @s: input string
*
*/
void print_rev(char *s)
{
	for (; *s != '\0' ; s++)
{
	continue;
}
	for (s = s - 1; *s > 0; s--)
{
	_putchar(*s);
}
	_putchar('\n');
}
