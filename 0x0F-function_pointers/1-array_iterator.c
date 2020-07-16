#include "function_pointers.h"
#include <stdio.h>
/**
*
*
*
*
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int ind;

	for (ind = 0; ind <= size; ind++)
	{
		(*action)(array[ind]);
	}
}
