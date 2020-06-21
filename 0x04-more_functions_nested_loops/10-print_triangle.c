#include "holberton.h"

/**
*
*
*
*
*/
void print_triangle(int size)
{
	int col;
	int row;
	int rowspace;



	for (col = 0 ; col < size ; col++)
{
	for (rowspace = 0 ; rowspace < ((size - col) - 1) ; rowspace++)
{
	_putchar(' ');
}
	for (row = 0 ; row < (((size - col) * -1) + size) + 1 ; row++)
{
	_putchar('#');
}
	_putchar('\n');
}
	if (size <= 0)
{
	_putchar('\n');
}

}
