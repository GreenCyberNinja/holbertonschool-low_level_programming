#include <stdio.h>

/**
* main - putchar hexadecimal range
*
* Return: void
*/

int main(void)
{
	char num;

	char CH;

	for (num = '0' ; num <= '9' ; num++)
{
	putchar(num);
}
	for (CH = 'a' ; CH <= 'f' ; CH++)
{
	putchar(CH);
}
	putchar('\n');

	return (0);
}
