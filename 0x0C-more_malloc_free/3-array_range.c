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
	int i;
	int *a;

	if (min > max)
	return (NULL);

	for (i = min; i <= max; i++)

	a = malloc(sizeof(int) * i + 1);

	if (a == NULL)
	return (NULL);

	for (i = min; i <= max; i++)
	{
		a[i] = i;
	}
	return (a);
}
