#include "holberton.h"

/**
*
*
*
*
*/

int print_sign(int n)
{
	int r;

	if (n > '0')
{
	_putchar('+');
	r = 1;
}
	if (n == 0)
{
	_putchar('0');
	r = 0;
}
	else if (n < '0')
{
	_putchar('-');
	r = -1;
}
	return (r);
}
