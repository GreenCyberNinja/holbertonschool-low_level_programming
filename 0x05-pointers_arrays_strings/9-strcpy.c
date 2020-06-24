#include "holberton.h"

/**
* *_strcpy - copies string form pointer to pointer
*
* @dest: destination pointer
*
* @src: input string
*
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while ((dest[i] = src[i]) != '\0')
{
	i++;
}
	return (dest);
}
