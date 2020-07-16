#include "function_pointers.h"
#include <stdio.h>
/**
* int_index - finds a number in an array
*
* @array: is what it is
* @size: size of array
* @cmp: compare function
*
* Return: -1 or -ind
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int ind;

	if (size <= 0 || array == NULL || cmp == NULL)
	return (-1);

	for (ind = 0; ind <= size; ind++)
	{
		(*cmp)(array[ind]);

		if (cmp(array[ind]) != 0)
		return (ind);
	}
	return (-1);
}
