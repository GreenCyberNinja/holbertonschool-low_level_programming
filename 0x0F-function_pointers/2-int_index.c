#include "function_pointers.h"
#include <stdio.h>
/**
*
*
*
*
*
*
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int ind;

	if (size <= 0)
	return (-1);

	for (ind = 0; ind <= size; ind++)
	{
		(*cmp)(array[ind]);

		if (cmp(array[ind]) != 0)
		return (ind);
	}
	return (-1);
}
