#include "holberton.h"
/**
* _strpbrk - searches string for any of a set of bytes
*
* @s: input string
* @accept: input set of bytes
*
* Return: either return *s or null
*/
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
{
	for (index = 0 ; accept[index] ; index++)
{
	if (*s == accept[index])
	return (s);
}
	s++;
}
	return ('\0');
}
