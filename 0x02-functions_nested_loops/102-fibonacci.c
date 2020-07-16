#include <stdio.h>
/**
* main - prints the first 50 fibonacci numbers
* Return: 0
*/
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c;
	int i;

	printf("%lu, ", a);
	printf("%lu, ", b);
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);
		if (i < 47)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
