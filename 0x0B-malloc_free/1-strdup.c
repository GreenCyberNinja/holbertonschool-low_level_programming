#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - str copied and returned
*
* @str: input string to be copied
*
* Return: string or null if malloc fails
*/
char *_strdup(char *str)
{
	char *a;
	int c;
	int i;

	i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (c = 0 ; str[c] != '\0' ; c++)
	{
		continue;
	}
	a = (char *) malloc(c * sizeof(char) + 1);

	if (a == NULL)
	return (NULL);

	while ((a[i] = str[i]) != '\0')
	{
		i++;
	}
	return (a);
}
