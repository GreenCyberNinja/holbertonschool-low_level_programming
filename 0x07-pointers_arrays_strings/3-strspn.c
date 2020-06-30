#include "holberton.h"
/**
* _strspn - gets the length of the substring
*
* @s: input string
* @accept: substring or comparitive
*
* Return: bytes that are accept & s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int index;

	while (*s)
{
	for (index = 0 ; accept[index] != '\0' ; index++)
{
	if (*s == accept[index])
{
	b++;
	break;
}
	if (accept[index + 1] == '\0')
{
	return (b);
}
}
	s++;
}
	return (b);
}
