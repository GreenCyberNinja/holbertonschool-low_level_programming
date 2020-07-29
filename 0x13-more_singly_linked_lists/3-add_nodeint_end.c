#include "lists.h"
/**
* add_nodeint_end - adds node to end of list
* @head: input list
* @n: input int
* Return: list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *pmt;

	tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
		return (NULL);

	if (*head == NULL)
		*head = tmp;

	pmt = *head;

	while (pmt->next != NULL)
		pmt = pmt->next;

	pmt->next = tmp;
	tmp->n = n;
	tmp->next = NULL;

	return (tmp);
}
