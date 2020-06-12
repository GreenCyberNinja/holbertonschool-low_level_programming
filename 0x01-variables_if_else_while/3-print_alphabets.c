#include <stdio.h>

/**
* main - print the alphabet with putchar2X
*
* Return:void
*/
int main(void)
{
	char ch;
	char CH;

	for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
	for (CH = 'A' ; CH <= 'Z' ; CH++)
{
	putchar(CH);
}
	putchar('\n');

	return (0);
}
