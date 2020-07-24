#include "lists.h"
/**
* list_len - length of list
* @h: input list
* Return: list length
*/
size_t list_len(const list_t *h)
{
	size_t i;
	const list_t *n;

	n = h;

	for (i = 0; n != NULL; i++)
	{
		n = n->next;
	}
	return (i);
}
