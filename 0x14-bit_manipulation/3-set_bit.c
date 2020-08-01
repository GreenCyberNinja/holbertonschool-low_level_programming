#include "holberton.h"
/**
* set_bit - sts tthe bit at index to 1
* @n: int to be changed
* @index: where to change the bit
* Return: returns 1 0r -1 on fail
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	int stat;

	if (index > 31)
		return (-1);

	stat = 1 << index;
	*n = *n | stat;
	return (1);
}
