#include "hash_tables.h"
/**
*
*
*
*
*
*
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *newt = malloc(sizeof(hash_table_t));

	newt->size = size;
	newt->array = malloc(sizeof(hash_node_t *) * size);
	for (i = 0; i < size; i++)
		newt->array[i] = NULL;
	return (newt);
}
