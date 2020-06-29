#include "holberton.h"
/**
* _memcpy - copy memory area
*
* @dest: destination
* @src: source
* @n: amount bytes to copy from source
*
* Return: destination
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
{
	dest[index] = src[index];
}
	return (dest);
}
