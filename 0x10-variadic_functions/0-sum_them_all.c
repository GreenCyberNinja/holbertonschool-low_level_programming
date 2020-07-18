#include "variadic_functions.h"
/**
*
*
*
*
*
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ad;
	int sum;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(ad, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ad, int);
	}
	va_end(ad);

	return sum;
}
