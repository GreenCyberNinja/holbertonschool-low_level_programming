#include "holberton.h"
/**
* binary_to_uint - converts binary to unsigned int
* @b: input string
*/
unsigned int binary_to_uint(const char *b)
{
	int l;
	unsigned int coin = 0, sum = 1;

	if (b == NULL)
		return (0);

	for (l = 0; b[l] != '\0' && l < 32; l++)
		continue;

	for (l--; l >= 0; l--, sum *= 2)
	{
		if (b[l] == '1')
			coin += sum;
		if (b[l] != '1' && b[l] != '0')
			return (0);
	}
	return (coin);
}
