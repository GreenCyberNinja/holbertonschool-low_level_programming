#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*
*
*
*
*
*
*
*/
int main(int argc, char *argv[])
{
	int sum;
	int ind;
	sum = 0;

	if (argc == 0)
{
	printf("0\n");
}
	for (ind = 1 ; ind < argc ; ind++)
{
	if ( atoi(argv[ind]) == 0)
{
	printf("Error\n");
	return (1);
}
	sum = sum + atoi(argv[ind]);
}
	printf("%d\n", sum);
	return (0);
}
