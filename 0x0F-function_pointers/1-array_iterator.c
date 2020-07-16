#include "function_pointers.h"
/**
* array_iterator - iterates array
* @array: array to iterate
* @size: size of array
* @action: function
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int ind;

	if (size != 0 && array != NULL && action != NULL)
	{

		for (ind = 0; ind <= size; ind++)
		{
			(*action)(array[ind]);
		}
	}
}
