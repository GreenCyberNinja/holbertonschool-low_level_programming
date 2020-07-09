#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* argstostr - prints arguments into a string
*
* @ac: argument count
* @av: argument array
*
* Return: arg string or null
*/
char *argstostr(int ac, char **av)
{
	int ind, cnt, aln = 0, bln = 0;
	char *a;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (ind = 0; ind < ac; ind++, aln++)
	{
		for (cnt = 0; av[ind][cnt] != '\0'; cnt++, aln++)
		{
			continue;
		}
	}

	ind = 0, cnt = 0;

	a = malloc(sizeof(char) * aln + 1);

	if (a == NULL)
	{
		return (NULL);
	}
	for (ind = 0; ind < ac; ind++, bln++)
	{
		for (cnt = 0; av[ind][cnt] != '\0'; cnt++,  bln++)
		{
			a[bln] = av[ind][cnt];
		}
		a[bln] = '\n';
	}
	a[bln] = '\0';
	return (a);
}
