#include "holberton.h"
/**
* get_bit - gets the bit at index
* @n: input number
* @index: the bit you want
* Return: the bit or -1 if fail
*
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31)
		return (-1);

	return ((n >> index) & 1);
}
