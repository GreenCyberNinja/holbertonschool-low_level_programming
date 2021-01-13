#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* linear_search - linearly search for value
* @array: array to be searched
* @size: size of array
* @value: value to be fpound in array
* Return: -1 or value
*/
int linear_search(int *array, size_t size, int value)
{
	size_t ind;

	for (ind = 0; ind < size; ind++)
	{
		printf("Value checked array[%lu] = [%d]\n", ind, array[ind]);
		if (array[ind] == value)
			return (array[ind]);
	}
	return (-1);
}
