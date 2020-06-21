#include <stdio.h>
#include "holberton.h"
/**
* main - prints 0-99
*
*
* Return: void
*/

int main(void)
{
	int t;

	for (t = 1 ; t <= 100 ; t++)
{
	if ((t % 3) == 0 && (t % 5) != 0)
{
	printf("Fizz");
}
	if ((t % 3) != 0 && (t % 5) == 0)
{
	printf("Buzz");
}
	if ((t % 3) == 0 && (t % 5) == 0)
{
	printf("FizzBuzz");
}
	if ((t % 3) != 0 && (t % 5) != 0)
{
	printf("%d", t);
}
	putchar(' ');
}
	putchar('\n');
	return (0);
}
