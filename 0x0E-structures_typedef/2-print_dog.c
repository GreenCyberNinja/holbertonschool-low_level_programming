#include <stdio.h>
#include "dog.h"
/**
*
*
*
*
*/
void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
	{
		(*d).name = "nill";
	}

	printf("Name: %s\n", (*d).name);
	printf("Age: %.1f\n", (*d).age);

}
