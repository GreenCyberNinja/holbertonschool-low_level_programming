#include "holberton.h"

/**
* _abs - returns absolute value
*
* @a: input
*
* Return: return a
*/
int _abs(int a)
{
	if (a <= 0)
{
	a = (a * -1);

	return (a);
}
	else if (a >= 0)
{
	a = (a * 1);
}
	return (a);
}
