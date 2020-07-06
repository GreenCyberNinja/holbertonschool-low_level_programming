#include "holberton.h"
#include <stdio.h>
/**
* main - prints all arguments on new line
*
* @argc: argument count
* @argv: argument string
*
* Return: void
*/
int main(int argc, char *argv[])
{
	int count;

	for (count = 0 ; count < argc ; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
