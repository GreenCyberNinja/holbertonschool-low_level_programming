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
	if (a < 0)
{
	a = (a * (-1));
	_putchar('0' + (a % 10));
	return (a % 10);
}

	else
{

	_putchar('0' + (a % 10));
	return (a % 10);
}
	return (a);
}
