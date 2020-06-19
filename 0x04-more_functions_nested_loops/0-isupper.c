#include "holberton.h"

/**
* _isupper - checks if uppercase character
*
* @c: input
*
* Return: result
*/
int _isupper(int c)
{
	int r;

	if (c >= 65 && c <= 90)
{
	r = 1;
}

	else
{
	r = 0;
}
	return (r);
}
