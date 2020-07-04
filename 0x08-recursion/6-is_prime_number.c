#include "holberton.h"
int is_prime(int n, int t);
/**
* is_prime_number - checks if prime or not
*
* @n: imput number
*
* Return: returns either true or false
*/
int is_prime_number(int n)
{
	int x;

	x = is_prime(n, 2);
	return (x);
}
/**
* is_prime - the heavy lifting checks for prime recursively
*
* @n: imput number
* @t: recursive counting variable
*
* Return: returns either 1 or 0
*/
int is_prime(int n, int t)
{
	if (n <= 0)
	{
		return (0);
	}
	if ((n % t) != 0 && t < n)
	{
		return (is_prime(n, t + 1));
	}
	if (t == n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
