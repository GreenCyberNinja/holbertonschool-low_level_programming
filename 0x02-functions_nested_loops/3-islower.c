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
	r = 1;}

	if (c >= 65 && c <= 90)
{
	r = 0;
}
	return (r);
}
