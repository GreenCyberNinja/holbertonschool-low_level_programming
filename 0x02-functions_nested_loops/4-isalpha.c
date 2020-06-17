#include "holberton.h"

/**
* _isalpha - returns 1 if an alphanumerical character
*
* @c: input
*
* Return: r
*/
int _isalpha(int c)
{
	int r;

	if (c >= 65 && c <= 90)
{
	r = 1;
}
	else if (c >=97 && c <= 122)
{
	r = 1;
}
	else
{
	r = 0;
}
	return(r);
}
