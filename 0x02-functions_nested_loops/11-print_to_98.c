#include "holberton.h"
#include <stdio.h>

/**
* print_to_98 - counts up or down to 98
*
* @n: input number
*/
void print_to_98(int n)
{
	if (n < 98)
{
	for (; n < 98 ; n++)
{
	printf("%d", n);
	printf(",");
	printf(" ");

}
}
	if (n > 98)
{
	for (; n > 98 ; n--)
{
	printf("%d", n);
	printf(",");
	printf(" ");
}
}
	if (n == 98)
{
	printf("%d\n", n);
}
}
