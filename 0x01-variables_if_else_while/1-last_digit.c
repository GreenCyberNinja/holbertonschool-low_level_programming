#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main = function void of argument
*
* last digit of a random number and if its 5 or greater or 6 or less or 0
*
* Return: void
*/

int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l >= 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, l);
}
	else if (l <= 6, l != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
}
	else if (l == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, l);
}
	return (0);
}
