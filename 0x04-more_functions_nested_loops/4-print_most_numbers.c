#include <stdio.h>

/**
* print_most_numbers - print the alphabet with putchar
*
* Return:void
*/
void print_most_numbers(void)
{
	char ch;

	for (ch = 48 ; ch <= 57 ; ch++)
{
	if (ch != 50 && ch != 52)

	putchar(ch);
}
	putchar('\n');
}
