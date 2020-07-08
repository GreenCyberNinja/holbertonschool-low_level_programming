#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - adds string 2 to string 1
*
* @s1: input string 1
* @s2: input string 2
*
* Return: returns string or null
*/
char *str_concat(char *s1, char *s2)
{
	char *a;
	int c;
	int c2;
	int size;
	int i;

	i = 0;

	for (c = 0 ; s1[c] != '\0'; c++)
	continue;

	for (c2 = 0 ; s2[c2] != '\0'; c2++)
	continue;

	size = c + c2;

	a = (char *) malloc(size * sizeof(char) + 1);

	if (a == NULL)
	return (NULL);

	while ((a[i] = s1[i]))
	{
		i++;
	}


	c = 0;

	while ((a[i] = s2[c]))
{
	i++;
	c++;
}
	a[i] = '\0';
	return (a);
}
