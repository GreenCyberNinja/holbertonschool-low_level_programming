#include "lists.h"
/**
* sum_listint - adds everything in list
* @head: input list
* Return: sum of list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
