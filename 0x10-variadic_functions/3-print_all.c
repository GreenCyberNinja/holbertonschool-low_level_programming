#include "variadic_functions.h"

/**
 * print_all - prints all arguments
 *
 * @format: formats to be passed to list
 */
void print_all(const char * const format, ...)
{
	va_list ls;
	int i = 0, er;
	char *arg;

	va_start(ls, format);

	while (format[i] != '\0')
	{
		er = 0;
		switch (format[i])
		{
			case 's':
				arg = va_arg(ls, char *);
				if (arg == NULL)
				{printf("(nil)");
					break; }
				printf("%s", arg);
				break;
			case 'f':
				printf("%f", (float)va_arg(ls, double));
				break;
			case 'c':
				printf("%c", (char)va_arg(ls, int));
				break;
			case 'i':
				printf("%d", va_arg(ls, int));
				break;
			default:
				er = 1;
				break;
		}
		if (format[i + 1] != '\0' && er == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ls);
}
