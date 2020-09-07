#include "lists.h"
/**
* insert_dnodeint_at_index - says it all don't it
* @h: is list to insert
* @idx: index to set new node at
* @n: data to put in new node
* Return: returns updated list or null
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *tmp;

	if (*h == NULL)
		return (NULL);
	if ((*h)->prev != NULL)
		while ((*h)->prev == NULL)
			*h = (*h)->prev;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	tmp = *h;
	while (tmp->next != NULL)
	{
		if (i == idx)
		{
			new->n = n;
			tmp->prev->next = new;
			tmp->prev = new->prev;
			tmp->prev = new;
			new->next = tmp;
			return (new);
		}
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
