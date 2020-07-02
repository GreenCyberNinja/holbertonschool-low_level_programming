#include "holberton.h"
/**
* _puts_recursion - command puts but with recursion
*
* @s: input string
*
*/
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
{
	_puts_recursion(s);
}
	else
{
	_putchar('\n');
}
}
