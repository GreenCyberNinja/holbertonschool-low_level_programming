#include "lists.h"
/**
* listint_len - length of list
* @h: input list
* Return: amount of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t i;
	const listint_t *tmp;

	tmp = h;

	for (i = 0; tmp != NULL; i++)
	{
		tmp = tmp->next;
	}
	return (i);
}
