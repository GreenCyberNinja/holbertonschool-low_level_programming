#include "hash_tables.h"
/**
* hash_table_set - sets the hash table
* @ht: table to set
* @key: key to find
* @value: value to add to node
* Return: 1 or 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind;
	hash_node_t *tmp;
	char *newv;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	if (strlen(key) == 0)
		return (0);

	ind = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[ind];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			newv = strdup(value);
			if (newv == NULL)
				return (0);
			free(tmp->value);
			tmp->value = newv;
			return (1);
		}
		tmp = tmp->next;
	}

	if (add_node(&ht->array[ind], key, value) == NULL)
		return (0);

	return (1);
}
/**
* add_node - adds node to array
* @head: to add node to
* @key: to add to key
* @value: to add to value
* Return: new list or null
*/
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{

	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	new->next = *head;
	*head = new;
	return (new);
}
