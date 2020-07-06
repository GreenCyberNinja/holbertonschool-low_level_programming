#include "holberton.h"
#include <stdio.h>
/**
* main - counts how many arguments including iteself
*
* @argc: argument count
* @argv: argument string
*
* Return: void
*/
int main(int argc, char *argv[])
{
	int count;

	if (argv != '\0')
{
	for (count = 0 ; count < argc; count++)
	{
	continue;
	}
	printf("%d\n", count - 1);
}
	return (0);
}
