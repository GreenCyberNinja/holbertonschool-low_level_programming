#include "holberton.h"

/**
* jack_bauer - count up to 23:59
*
*
* Return: void
*/
void jack_bauer(void)
{
	int s;
	int m;
	int hi;
	int ho;

	for (ho = '0' ; ho <= '2' ; ho++)
{
	for (hi = '0' ; hi <= '9' ; hi++)
{
	for (m = '0' ; m <= '5' ; m++)
{
	for (s = '0' ; s <= '9' ; s++)
{
	if (ho < '2' || hi < '4')
{
	_putchar(ho);
	_putchar(hi);
	_putchar(58);
	_putchar(m);
	_putchar(s);
	_putchar('\n');
}
}
}
}
}
	return (0);
}
