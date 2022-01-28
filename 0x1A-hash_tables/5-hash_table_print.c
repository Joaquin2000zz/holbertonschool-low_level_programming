#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 * Return: void function
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int pos = 0, flag = 0;
	hash_node_t *aux = NULL;

	if (!ht)
		return;
	printf("{");
	for (pos = 0; pos < ht->size; pos++)
	{
		aux = ht->array[pos];
		while (aux)
		{
			if (pos > 0 && flag == 1)
				printf(", ");
			printf("'%s': '%s'", aux->key, aux->value);
			aux = aux->next;
			flag = 1;
		}

	}
	printf("}\n");
}
