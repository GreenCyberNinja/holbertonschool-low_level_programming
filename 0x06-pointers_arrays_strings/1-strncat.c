#include "holberton.h"
/**
* _strncat - cocatenate two string until n in array
* @dest: destination array
* @xrc: source string
* @n: limiter 
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int len;

	len = 0;

	while (dest[len])
{
	len++;
}

	for (a = 0 ; a < n && src[a] != '\0' ; a++)
{
	dest[len + a] = src[a];
}

	dest[len + a] = '\0';

	return (dest);
}
