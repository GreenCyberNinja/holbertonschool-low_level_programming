#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - allocate memory
*
* @b: amount of memory to be allocated
*
* Return: returns null or malloc pointer
*/
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
	{
		free(a);
		exit(98);

	}
	return (a);
}
