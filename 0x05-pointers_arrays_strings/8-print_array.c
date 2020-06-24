#include "holberton.h"
#include <stdio.h>
/**
* print_array - print array of intergers
*
* @a: input array
*
* @n: array number
*/
void print_array(int *a, int n)
{
	int t;

	for (t = 0 ; t < n ; t++)
{
	printf("%d", a[t]);
	if (t < n - 1)
{
	printf(", ");
}
}
	printf("\n");
}
