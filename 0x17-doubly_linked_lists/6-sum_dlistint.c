#include "lists.h"
/**
* sum_dlistint - summs all parts of the list
* @head: list to be summed up
* Return: sum or 0
*
*
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	if (head->prev != NULL)
		while (head->prev == NULL)
			head = head->prev;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
