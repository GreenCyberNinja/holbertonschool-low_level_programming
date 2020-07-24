#include "lists.h"
/**
* add_node_end - adds nodes at the end of list
*
* @head: strat of list
* @str: string input
* Return: null or list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *tmp, *pmt;

	for (i = 0; str[i] != '\0'; i++)
		continue;

	tmp = malloc(sizeof(list_t));

	if (tmp == NULL)
		return (NULL);

	if (*head == NULL)
		*head = tmp;

	pmt = *head;

	while (pmt->next != NULL)
		pmt = pmt->next;

	pmt->next = tmp;
	tmp->str = strdup(str);
	tmp->len = i;
	tmp->next = NULL;

	return (tmp);
}
