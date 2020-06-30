#include "holberton.h"
/**
* _strstr - finds substring inside string
*
* @needle: substring to be found in main string
* @haystack: main string
*
* Return: either haystack null or needle
*/
char *_strstr(char *haystack, char *needle)
{
	int byte;


	if (*needle == 0)
{
	return (haystack);
}
	while (*haystack)
{
	byte = 0;

	if (haystack[byte] == needle[byte])
{
	return (needle);
}
	if (needle[byte + 1] == '\0')
{
	return (haystack);
}
	byte++;
	haystack++;
}
	return (0);
}
