#include "lists.h"
/**
* free_listint2 - frees and sets head to null
* @head: list to be freed and set to null
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
