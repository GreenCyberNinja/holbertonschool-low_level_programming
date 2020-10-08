#include "hash_tables.h"
/**
* hash_table_create - creates hash table
* @size: size of table
* Return: new table or NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *newt = malloc(sizeof(hash_table_t));

	if (newt == NULL)
		return (NULL);

	newt->size = size;
	newt->array = malloc(sizeof(hash_node_t *) * size);

	if (newt->array == NULL)
	{
		free(newt);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		newt->array[i] = NULL;
	return (newt);
}
