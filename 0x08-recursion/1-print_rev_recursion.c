#include "holberton.h"
/**
*
*
*
*
*
*
*/
void _print_rev_recursion(char *s)
{
	_putchar(*s);
	--s;
	if (*s > '\0')
{
	_print_rev_recursion(s);
}
}
