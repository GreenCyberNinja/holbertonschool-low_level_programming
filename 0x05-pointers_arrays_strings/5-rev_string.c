#include "holberton.h"

/**
* rev_string - revs string
*
* @s: input string
*
*/
void rev_string(char *s)
{
	int t;
	int q;
	int r;

	q = 0;

	for (t = 0 ; s[t] != '\0' ; t++)
{
	continue;
}
	t = t - 1;

	while (q <= t)
{
	r = s[q];
	s[q] = s[t];
	s[t] = r;
	q++;
	t--;
}
}
