#include "holberton.h"

/**
* _islower - returns 1 if lowercase
*
* @c: input for program
*
* Return: int r
*/
int _islower(int c)
{
	int r;

	if (c >= 97 || c <= 122)
{
	r = 1;
}
	if (c >= 123 && c <= 96)
{
	r = 0;
}
	return (r);
}
