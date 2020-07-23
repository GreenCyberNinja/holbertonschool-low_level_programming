#include "lists.h"
/**
* print_list - prints singly list
* @h: list to be printed
* Return: items printed
*/
size_t print_list(const list_t *h)
{
	const list_t *n;
	int i;

	n = h;

	for (i = 0; n != NULL; i++)
	{
		if (n->str == NULL)
		printf("[0] (nil)\n");

		else
		printf("[%d] %s\n", n->len, n->str);
		n = n->next;
	}
	return (i);
}
