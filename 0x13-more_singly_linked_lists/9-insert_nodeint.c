#include "lists.h"
/**
* insert_nodeint_at_index - says it all dont it?
* @head: input list
* @idx: index
* @n: the node to be installed
* Return: null or updated list
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp;
	listint_t *ans = malloc(sizeof(listint_t));

	if (ans == NULL)
		return (NULL);

	ans->n = n;
	tmp = *head;

	if (idx == 0)
	{
		ans->next = *head;
		*head = ans;
		return (ans);
	}

	while (tmp != NULL)
	{
		if (i != (idx - 1))
		{
			i++;
			tmp = tmp->next;
		}
		else if (i == (idx - 1))
		{
			ans->next = tmp->next;
			tmp->next = ans;
			return (ans);
		}
	}
	return (NULL);
}
