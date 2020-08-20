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
	int b = (a % 10);

	if (b < 0)
		b *= -1;
	_putchar(b + '0');
	return (b);
}
