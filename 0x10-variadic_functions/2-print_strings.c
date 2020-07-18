#include "variadic_functions.h"
/**
* print_strings - prints all string arguments
* @separator: string in between args
* @n: amount of args
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ls;

	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(ls, char *) == NULL)
			printf("(nill)");

		printf("%s", va_arg(ls, char *));

		if (i != (n - 1))
		{
			if (separator != NULL)
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ls);
}
