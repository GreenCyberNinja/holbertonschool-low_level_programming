#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - creats an array of input size and fills it with specific char
*
* @size: input size
* @c: input charcter
*
* Return: returns filled array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *b;

	if (size == 0)
	{
		return (NULL);
	}

	b = (char *) malloc(size * sizeof(char));

	if (b == NULL)
	return (NULL);

	for (a = 0 ; a < size ; a++)
	{
		b[a] = c;
	}

	return (b);
}
