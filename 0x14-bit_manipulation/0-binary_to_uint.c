#include "holberton.h"
/**
* binary_to_uint - converts binary to unsigned int
* @b: input string
* Return: returns base 10 or 0
*/
unsigned int binary_to_uint(const char *b)
{
	int l;
	unsigned int nint = 0;

	if (b == NULL)
		return (0);

	for (l = 0; b[l] != '\0'; l++, nint = nint << 1)
	{
		if (b[l] == '1')
		{
			nint++;
		}
		if (b[l] != '0' && b[l] != '1')
			return (0);
	}
	nint = nint >> 1;
	return (nint);
}
