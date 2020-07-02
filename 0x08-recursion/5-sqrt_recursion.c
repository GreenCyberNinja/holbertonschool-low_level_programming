#include "holberton.h"
int _sqrt(int y, int n);
/**
* _sqrt_recursion - returns square root
*
* @n: input number
*
* Return: square root
*/
int _sqrt_recursion(int n)
{
	int x;

	x = _sqrt(0, n);
	return (x);
}
/**
* _sqrt - gets the square root to be returned
*
* @y: increment variable
* @n: input number
*
* Return: square root for recursion
*/
int _sqrt(int y, int n)
{
	int x;

	if ((y * y) == n)
{
	x = y;
}
	if ((y * y) < n)
{
	x = _sqrt(y + 1, n);
}
	if ((y * y) > n)
{
	x = -1;
}
	return (x);
}
