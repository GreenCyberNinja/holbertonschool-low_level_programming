#include "holberton.h"

/**
* print_most_numbers - print the alphabet with putchar
*
* Return:void
*/
void print_most_numbers(void)
{
	char ch;

	for (ch = '0' ; ch <= '9' ; ch++)
{
	if (ch != '2' && ch != '4')

	_putchar(ch);
}
	_putchar('\n');
}
