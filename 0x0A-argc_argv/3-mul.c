#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - multiplies two numbers in a string
*
* @argc: argument count
* @argv: argument string
*
* Return: void or one
*/
int main(int argc, char *argv[])
{
	int a;
	int b;
	int pro;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	pro = a * b;

	if (argc == 3)
	{
		printf("%d\n", pro);
	}
	return (0);
}
