#include "lists.h"
/**
* add_node - adds a node
* @head: node abode
* @str: string
* Return: null or head
*/

list_t *add_node(list_t **head, const char *str)
{
	int i;

	list_t *tmp = malloc(sizeof(list_t));

	if (tmp == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		continue;

	tmp->str = strdup(str);
	tmp->len = i;
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
