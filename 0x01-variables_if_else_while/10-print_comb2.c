#include <stdio.h>

/**
* main - double numeral count up
*
* Return: void
*/
int main(void)
{
	int ch;
	int sch;

	for (ch = '0' ; ch <= '9' ; ch++)
{
	for (sch = '0' ; sch <= '9' ; sch++)
{
	putchar(ch);
	putchar(sch);

	if (ch < '9' || sch < '9')
{
	putchar(',');
	putchar(' ');
}
}
}
	putchar('\n');
	return (0);
}
