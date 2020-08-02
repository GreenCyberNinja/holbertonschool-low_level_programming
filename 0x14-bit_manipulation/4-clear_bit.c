#include "holberton.h"
/**
* clear_bit - set the bit@index to 0
* @n: input number
* @index: bit to be changed
* Return: either 1 or -1 for pass or fail
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 31)
		return (-1);


	i = 1 << index;
	*n = *n & (~i);
	return (1);
}
