#include "holberton.h"

/**
* print_line - prints a line thats the distance of n
*
* @n: - input
*/
void print_line(int n)
{
	int s;

	if (n > 0)
{
	for (s = 0 ; s < n ; s++)
{
	_putchar('_');
}
}
	_putchar('\n');
}
