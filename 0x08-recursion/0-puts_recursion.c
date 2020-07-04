#include "holberton.h"
/**
* _puts_recursion - command puts but with recursion
*
* @s: input string
*
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
	else
{
	_putchar('\n');
}
}
