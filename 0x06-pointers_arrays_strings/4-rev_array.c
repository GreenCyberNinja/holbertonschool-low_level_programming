#include "holberton.h"
/**
* reverse_array - reverses array
* @a: input array
* @n: input limitter
*
*
*
*/
void reverse_array(int *a, int n)
{
	int x;
	int y;
	int z;

	x = 0;
	y = 0;

	while (x < n - 1)
{
	x++;
}
	while (y <= x)
{
	z = a[y];
	a[y] = a[x];
	a[x] = z;
	y++;
	x--;
}
}
