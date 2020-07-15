#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - takes whatever function and prints the string
* @name: string to be printed
* @f: function to be used
*/
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
