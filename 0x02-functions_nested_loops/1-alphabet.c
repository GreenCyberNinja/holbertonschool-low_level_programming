#include "holberton.h"
/**
* print_alphabet - prints the lowercase alphabet a-z
*
* Return:void
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
{

	_putchar(ch);

}
	_putchar('\n');
}
