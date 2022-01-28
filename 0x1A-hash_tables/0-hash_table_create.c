#include "hash_tables.h"

/**
 * hash_table_create - function which creates a hash table
 * @size: hash table size
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHashTable = NULL;

	if (size > 1024)
		return (NULL);

	newHashTable = calloc(0, sizeof(hash_table_t));
		if (!newHashTable)
			return (NULL);
	newHashTable->size = size;
	newHashTable->array = calloc(0, sizeof(hash_node_t *) * size);
	if (!newHashTable->array)
	{
		free(newHashTable);
		return (NULL);
	}
	return (newHashTable);
}
