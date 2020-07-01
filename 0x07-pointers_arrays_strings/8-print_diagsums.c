#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of the diagonal
* @a: input array
* @size: size of array
*
*/
void print_diagsums(int *a, int size)
{
	int lft;
	int rit;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;

	for (lft = 0; lft < (size * size) ; lft = lft + size + 1)
{
	sum1 += a[lft];
}
	for (rit = size - 1; rit <= (size * size) - size; rit = rit + size - 1)
{
	sum2 += a[rit];
}
	printf("%d, %d\n", sum1, sum2);
}
