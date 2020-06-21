#include "holberton.h"

/**
*
*
*
*
*/

void print_diagonal(int n)
{
	int col;
	int row;

	if (n > 0)
{
	for (col = 0 ; col < n ; col++)
{
	for (row = 0 ; row < col ; row++)
{
	_putchar(' ');
}
	_putchar(92);
	_putchar('\n');
}
}
	else if (n <= 0)
{
	_putchar('\n');
}
}
