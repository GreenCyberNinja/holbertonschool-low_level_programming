#include "calc.h"
/**
* main - gets operator and args from terminal
*
* @argc: argument count
* @argv: argument string
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int a;
	int b;
	int ans;

	if (argc != 4 || argv == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	ans = (*get_op_func)(argv[2])(a, b);

	if (ans == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", ans);
	return (0);
}
