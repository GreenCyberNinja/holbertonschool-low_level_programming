#include "holberton.h"

/**
* print_numbers - print the alphabet with putchar
*
* Return:void
*/
void print_numbers(void)
{
	char ch;

	for (ch = 48 ; ch <= 57 ; ch++)
{
	_putchar(ch);
}
	_putchar('\n');

}
