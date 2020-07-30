#include "lists.h"
/**
* get_nodeint_at_index - gets a specific node
* @head: list to search
* @index: the node to grab
* Return: the node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp;

	tmp = head;

	while (tmp != NULL)
	{
		if (i != index)
		{
			i++;
			tmp = tmp->next;
		}
		if (i == index)
			return (tmp);
	}
	return (NULL);
}
