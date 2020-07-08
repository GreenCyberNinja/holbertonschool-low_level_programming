#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - alocates memory for a 2 dimensional array
*
* @height: height of the array
* @width: width of the array
*
* Return: either *a or NULL
*/
int **alloc_grid(int width, int height)
{
	int col;
	int row;
	int **a;

	if (width <= 0 || height <= 0)
	return (NULL);

	a = (int **) malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		free(a);
	return (NULL);
	}
	for (col = 0; col < height; col++)
	{
		a[col] = (int *)malloc(sizeof(int) * width);

		if (a[col] == NULL)
		{
			for (row = 0; row <= col; row++)
			{
				free(a[row]);
			}
				free(a);
				return (NULL);
		}
		for (row = 0; row < width; row++)
		{
			a[col][row] = 0;
		}
	}
	return (a);
}
