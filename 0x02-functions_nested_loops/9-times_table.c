#include "holberton.h"

/**
* times_table - multiplication table of 9
*
* Return: void
*/
void times_table(void)
{
	int li;
	int co;
	int r;

	for (li = 0 ; li < 10 ; li++)
{

	for (co = 0 ; co < 10 ; co++)

{
	r = (li * co);
	if (r > 9)
{
	_putchar(r / 10 + '0');
}
	_putchar(r % 10 + '0');

	if (co < 9)
{
	_putchar(',');
	if (((co + 1) * (li)) < 10)
{
	_putchar(' ');
}
	_putchar(' ');
}
}
	_putchar('\n');
}
}
