#include "holberton.h"
/**
* _strlen - retuens string length
*
* @s: input pointer
*
* Return: returns var n
*/
int _strlen(char *s)
{
	int n;

	for (n = 0 ; *s != '\0' ; s++)
{
	n++;
}
	return (n);
}
