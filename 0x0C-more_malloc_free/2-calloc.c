#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - mallocs and initializes array
*
* @nmemb: number of array elements
* @size: size of elements
*
* Return: returns array or null
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	a = malloc(nmemb * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		a[i] = 0;
	}

	return ((void *)a);
}
