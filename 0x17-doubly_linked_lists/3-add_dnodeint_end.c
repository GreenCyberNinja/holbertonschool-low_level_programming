#include "lists.h"
/**
* add_dnodeint_end - adds nodes at the end
* @head: list to add nodes to
* @n: data for node
* Return: returns null or updated list
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	int c = 0;
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		c++;
		*head = new;
	}
	else
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;

	tmp->next = new;
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (c == 0)
		new->prev = tmp;
	return (new);
}
