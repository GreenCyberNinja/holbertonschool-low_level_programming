#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strln - gets string length
* @s: input string
* Return: void or string length
*/
int _strln(char *s)
{
	int c;

	if (s == NULL)
		return (0);

	for (c = 0; s[c] != '\0'; c++)
		continue;

	return (c);
}
/**
* string_nconcat - concats strings till n
* @s1: input string 1
* @s2: input string 2
* @n: number of bytes of s2 to concat to s1
* Return: st
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b;
	unsigned int len1 = _strln(s1);
	unsigned int len2 = _strln(s2);
	char *ctstr;

	if (s1 == NULL)
	return (s1 = "");

	if (s2 == NULL)
	return (s2 = "");

	ctstr = (char *)malloc(sizeof(char) * len1 + n + 1);

	if (ctstr == NULL)
	{
		free(ctrstr);
		return (NULL);
	}
	for (a = 0; a < len1; a++)
	{
		ctstr[a] = s1[a];
	}
	for (b = 0; b < n; b++, a++)
	{
		if (b < len2)
		{
			ctstr[a] = s2[b];
		}
		else
		ctstr[a] = '\0';
	}
	ctstr[a] = '\0';
	return (ctstr);
}
