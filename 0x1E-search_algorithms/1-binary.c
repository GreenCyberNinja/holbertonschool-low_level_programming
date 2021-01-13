#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
* binary_search - searches an array with binary search
* @array: array to be searched
* @size: size of array to be searched
* @value: value to be found
* Return: -1 or the value
*/
int binary_search(int *array, size_t size, int value)
{
	int l, r, m, ind;

	l = 0;
	r = size - 1;
	while (l <= r)
	{
		printf("Searching in array: ");
		for (ind = l; ind <= r; ind++)
		{
			printf("%d", array[ind]);
				if (ind < r)
					printf(", ");
		}
		printf("\n");
		m = ((l + r) / 2);
		if (array[m] <= value)
			l = m + 1;
		if (array[m] >= value)
			r = m - 1;
		if (array[m] == value)
			return (array[m]);
	}
	return (-1);
}

