#include "holberton.h"

/**
* _puts - prints string to standard output
*
* @str: input string
*
*/
void _puts(char *str)
{
	int n;

	for (; *str != '\0' ; str++)
{
	_putchar(n);
	n = *str;
}
	_putchar('\n');
}
