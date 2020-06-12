#include <stdio.h>

/**
* main - print numbers 0-9
*
* Return:void
*/

int main(void)
{
	int n = 0;

	for (n = '0' ; n <= '9' ; n++)
{
	putchar(n);
}
	putchar('\n');

	return (0);
}
