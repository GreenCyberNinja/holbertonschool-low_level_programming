#include "variadic_functions.h"
/**
* print_numbers - prints all argument numbers
* @separator: string to seperator
* @n: number of args
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;

	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ls, int));
		if (i < (n - 1))
		{
			if (separator != NULL)
			printf("%s", separator);
		}
	}
	va_end(ls);
	printf("\n");
}
