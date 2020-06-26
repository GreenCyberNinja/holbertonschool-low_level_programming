#include "holberton.h"

/**
* _strcat - concatenates two strings
*
* @dest: output string
*
* @src: input
*
* Return: destination
*/
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	b = 0;

	for (a = 0 ; dest[a] != '\0' ; a++)
{
	continue;
}

	while ((dest[a] = src[b]) != '\0')
{
	a++;
	b++;
}
	dest[a] = '\0';

	return (dest);
}
