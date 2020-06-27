#include "holberton.h"
/**
* _strcmp - compares string
* @s1: input string 1
* @s2: input string 2
* Return: returns zero, negative or positive
*/
int _strcmp(char *s1, char *s2)
{
	for ( ; *s1 == *s2 ; s1++, s2++)
{
	if (*s1 == '\0')
{
	return (0);
}
}
	return (*s1 - *s2);
}
