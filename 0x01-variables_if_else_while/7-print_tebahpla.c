#include <stdio.h>

/**
* main - alphabet in reverse
*
* Return: void
*/

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
{
	putchar(ch);
}
	putchar('\n');
	return (0);
}
