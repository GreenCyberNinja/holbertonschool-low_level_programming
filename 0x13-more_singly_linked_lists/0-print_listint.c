#include "lists.h"
/**
* print_listint - prints int inside list
* @h: input string
*
* Return: amount of elements
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	size_t i;

	tmp = h;

	for (i = 0; tmp != NULL; i++)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (i);
}
