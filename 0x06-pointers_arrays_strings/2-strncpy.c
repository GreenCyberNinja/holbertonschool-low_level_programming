#include "holberton.h"
/**
*
*
*
*
*/
char *_strncpy(char *dest, char *src, int n)
{
	int a;
	int len;
	len = 0;

	while (dest[len] != '\0')
{
	len++;
}
	for (a = 0 ; a < n && src[a] != '\0' ; a++)
{
	dest[a] = src[a];
}
	for( ; a < n ; a++)
{
	dest[a] = '\0';
}
	return (dest);
}
