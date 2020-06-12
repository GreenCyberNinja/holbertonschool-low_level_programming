#include <stdio.h>

/**
* main - numbers with proper conatation
*
* Return: void
*/
int main(void)
{
	int ch = 0;

	for (ch = '0' ; ch <= '9' ; ch++)
{
	putchar(ch);
	if (ch <= '8')
	putchar(',');
	putchar(' ');

}

	putchar('\n');

	return (0);
}
