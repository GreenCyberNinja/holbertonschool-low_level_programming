#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_range - creates an array of int
*
* @min: minimum input
* @max: maximum input
*
* Return: null or array
*/
int *array_range(int min, int max)
{
	int i, m = min;
	int *a;

	if (min > max)
	return (NULL);


	a = malloc(sizeof(int) * (max - min) + 1);

	if (a == NULL)
	return (NULL);

	for (i = 0; m <= max; i++, m++)
	{
		a[i] = m;
	}
	return (a);
}
