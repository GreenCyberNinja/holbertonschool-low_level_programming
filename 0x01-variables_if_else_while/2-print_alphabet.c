#include <stdio.h>

/**
* main - print the alphabet with putchar
*
* Return:void
*/
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
	putchar('\n');

	return (0);
}
