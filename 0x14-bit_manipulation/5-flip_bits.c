#include "holberton.h"
/**
* flip_bits - list the number of bits needed to get from n to m
* @n: input number
* @m: compare number
* Return: total bits to be changed
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	int sum = 0;

	while (a)
	{
		if (a & 1)
			sum++;
		a = a >> 1;
	}
	return (sum);
}
