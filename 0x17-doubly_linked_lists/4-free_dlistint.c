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
		while(head->prev != NULL)
			head = head-> NULL;

	while (head != NULL)
	{

		head = head->next;
		free(head->prev);
	}
	free(head);
}
