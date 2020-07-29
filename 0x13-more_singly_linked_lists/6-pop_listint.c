#include "lists.h"
/**
* pop_listint - pops first node and returns the data
* @head: list to pop nodes from
* Return: returns data from released node
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int tn = 0;

	if (*head != NULL)
	{
		tn = (*head)->n;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	return (tn);
}
