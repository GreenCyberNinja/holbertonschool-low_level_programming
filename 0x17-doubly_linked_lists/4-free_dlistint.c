#include "lists.h"
/**
* free_dlistint - frees the list
* @head: list to be free
*/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{

		head = head->next;
		free(head->prev);
	}
	free(head);
}
