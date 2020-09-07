#include "lists.h"
/**
* free_dlistint - frees the list
* @head: list to be free
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;

	if (head->prev != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
