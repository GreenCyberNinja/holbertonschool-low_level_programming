#include "holberton.h"

/**
*
*
*
*
*
*/
void times_table(void)
{
	int li;
	int co;
	int r;

	for (li = '0' ; li <= '9' ; li++)
{

	for (co = '0' ; co <= '9' ; co++)

{
	r = (li * co);

	_putchar(r + '0');
	_putchar(',');
	_putchar(' ');
}
	_putchar('\n');
}
}
