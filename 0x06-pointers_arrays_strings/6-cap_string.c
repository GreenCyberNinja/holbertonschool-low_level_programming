#include "holberton.h"
/**
*
*
*
*/
int isit(char a)
{
	char *c = {" 	\n,;.!?\"(){}"};

	for (; *c !='\0'; c ++)
	{
		if (*c == a)
		{
			return(1);
		}
	}
	return (0);
}
/**
*
*
*
*
*/
char *cap_string(char *s)
{
	int ind;
	int len;

	if (s == NULL)
	{
		return (NULL);
	}

	for(len = 0; s[len] != '\0'; len++)
		continue;

	for (ind = 0; ind < len; ind++)
	{
		if ((isit(s[ind - 1]) == 1 && (ind < len)) || ind == 0)
		{
			if (s[ind] >= 97 && s[ind] <= 122)
			{
				s[ind] -= 32;
			}
		}
	}
	return (s);
}
