#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table
 * Return: void function
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux = NULL, *toDelete = NULL;
	unsigned long int pos = 0;

	if (!ht)
		return;
	for (pos = 0; pos < ht->size; pos++)
	{
		aux = ht->array[pos];
		while (aux)
		{
			free(aux->key);
			free(aux->value);
			toDelete = aux;
			aux = aux->next;
			free(toDelete);
		}
	}
	free(ht->array);
	free(ht);
}
