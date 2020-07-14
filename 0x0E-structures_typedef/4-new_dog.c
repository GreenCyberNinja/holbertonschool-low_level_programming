#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* sln - (string length)
* @s: input string
* Return: length
*/
int sln(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	return (i);
}
/**
* new_dog - structures a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int ind;
	char *n, *o;
	dog_t *fido;

	if (name == NULL || owner == NULL)
		return (NULL);

	n = malloc(sizeof(char) * (sln(name) + 1));

	if (n == NULL)
	return (NULL);

	o = malloc(sizeof(char) * (sln(owner) + 1));

	if (n == NULL)
	{
		free(n);
		return (NULL);
	}
	fido = malloc(sizeof(dog_t));

	if (fido == NULL)
	{
		free(n);
		free(o);
		return (NULL);
	}
	ind = 0;

	while ((n[ind] = name[ind]) != '\0')
		ind++;
	ind = 0;

	while ((o[ind] = owner[ind]) != '\0')
		ind++;

	(*fido).name = n;
	(*fido).age = age;
	(*fido).owner = o;
	return (fido);
}
