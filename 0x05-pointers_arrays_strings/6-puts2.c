#include "holberton.h"

/**
* puts2 - prints every other number starting with first
*
* @str: input string
*
*/

void puts2(char *str)
{

	int t;

	for (t = 0 ; *str != '\0' ; str++)
{
	t++;

	if (t % 2 != 0)
{
	_putchar(*str);
}
}
	_putchar('\n');

}
