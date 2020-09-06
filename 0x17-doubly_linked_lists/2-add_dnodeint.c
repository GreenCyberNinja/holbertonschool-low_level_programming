#include "lists.h"
/**
* add_dnodeint - adds a node at the beginning of list
* @head: list to add node
* @n: data to insert into node
* Return: returns new address
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (n == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	new->prev = NULL;
	return (new);
}
