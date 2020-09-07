#include "lists.h"
/**
* add_dnodeint_end - adds nodes at the end
* @head: list to add nodes to
* @n: data for node
* Return: returns null or updated list
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		*head = new;
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	new->n = n;
	new->next = NULL;
	new->prev = *head;
	return (new);
}
