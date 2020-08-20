#include "holberton.h"

/**
* print_last_digit - prints the last digit
*
* @a: input
*
* Return: last digit
*/
int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b < 0)
		b = b * -1;

	_putchar('0' + b);

	return (a);
}
