#include "holberton.h"
/**
* string_toupper - changes lowercase string to uppercase
*
* @s: input string
*
* Return: input string
*/
char *string_toupper(char *s)
{
	int a;
	int len;

	for (len = 0 ; s[len] != '\0' ; len++)
{
	continue;
}
	for (a = 0 ; a < len ; a++)
{
	if (s[a] >= 97 && s[a] <= 122)
{
	s[a] -= 32;
}
}
	return (s);
}
