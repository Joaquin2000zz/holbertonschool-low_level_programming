#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to index's stack
 * @ht: the hash table
 * @key: the key of the linked
 * @value: value to insert in the list of the especific index
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node = NULL;

	if (!ht || !key || !value)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!ht->array[index])
		new_node->next = NULL;
	else
		new_node->next = ht->array[index];
	ht->array[index] = new_node;
	/*printf("nodocreadocn value: %s y key: %s index: %lu\n",*/
	/*new_node->value, new_node->key, index);*/
	return (1);
}
