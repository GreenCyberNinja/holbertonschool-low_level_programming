#include "holberton.h"
/**
* _memset - fills memory with a constant byte
*
* @s: a pointer to the memory area to be filled
* @b: the character to fill the memory with
* @n: the number of bytes to fill
*
* Return: s after modification
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
{
	s[index] = b;
}
	return (s);
}
