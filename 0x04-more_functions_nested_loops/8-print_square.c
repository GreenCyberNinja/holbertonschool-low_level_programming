#include "holberton.h"

/**
* print_square - prints a square of a specified size
*
* @size: input size of square
*
*/

void print_square(int size)
{
	int row;
	int col;

	if (size > 0)
{
	for (col = 0 ; col < size ; col++)
{
	for (row = 0 ; row < size ; row++)
{
	_putchar('#');
}
	_putchar('\n');
}

}
	else
{
	_putchar('\n');
}
}
