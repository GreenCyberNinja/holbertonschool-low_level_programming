#include "holberton.h"
void recursprint(unsigned long int n);
/**
* print_binary - prints in binary
* @n: input number
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');

	recursprint(n);
}
/**
* recursprint - uses recursive to print binary
* @n: input n
*/
void recursprint(unsigned long int n)
{
	if (n == 0)
		return;

	recursprint(n >> 1);

	_putchar((n & 1) + '0');

}
