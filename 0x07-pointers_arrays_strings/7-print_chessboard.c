#include "holberton.h"
/**
* print_chessboard - prints chess board
*
* @a: input array
*
*
*/
void print_chessboard(char (*a)[8])
{
	int li;
	int co;

	for (co = 0 ; co < 8; ++co)
{
	for (li = 0 ; li < 8; ++li)
{
	_putchar(a[co][li]);
}
	_putchar('\n');
}
}
