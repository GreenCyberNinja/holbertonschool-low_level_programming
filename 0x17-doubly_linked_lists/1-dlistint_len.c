#include "lists.h"
/**
* dlistint_len - gets the length of list
* @h: list to get length of
* Return: length
*/
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
