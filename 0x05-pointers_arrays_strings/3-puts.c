#include "holberton.h"

/**
* _puts - prints string to standard output
*
* @str: input string
*
*/
void _puts(char *str)
{

	for (; *str != '\0' ; str++)
{
	_putchar(*str);
}
	_putchar('\n');
}
