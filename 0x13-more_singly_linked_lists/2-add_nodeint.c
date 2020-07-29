#include "lists.h"
/**
* add_nodeint - adds int at begining of list
* @head: imput list
* @n: input int
* Return: list
*
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
