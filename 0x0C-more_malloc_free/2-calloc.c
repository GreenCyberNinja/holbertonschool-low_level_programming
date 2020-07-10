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
	void *a;
	char *b;
	int i;

	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	b = malloc(nmemb * size);

	if (b == NULL)
		return (NULL);

	for (i = 0; b[i] != '\0'; i++)
	{
		b[i] = 0;
	}
	a = b;
	return (a);
}
