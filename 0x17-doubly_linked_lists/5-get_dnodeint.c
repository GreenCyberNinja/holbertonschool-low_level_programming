#include "lists.h"
/**
* get_dnodeint_at_index - gets the node at the index
* @head: list to get node from
* @index: node to get from
* Return: returns node or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (head->prev != NULL)
		while (head->prev == NULL)
			head = head->prev;

	if (head->next != NULL)
	{
		while (head != NULL)
		{
			if (i == index && head != NULL)
				return (head);
			head = head->next;
			i++;
		}
	}
	return (NULL);
}
