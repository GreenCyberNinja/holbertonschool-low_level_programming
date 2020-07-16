#include <stdio.h>
/**
* main - loops and adds all the multiples of three and five
*
* Return: returns 0
*/
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		 if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
