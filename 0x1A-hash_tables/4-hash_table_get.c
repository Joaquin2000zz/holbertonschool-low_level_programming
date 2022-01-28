#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: the key of the value to retrive
 * Return: value associated with the element, or NULL if it fails
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *aux = NULL;
	char *ret = NULL;

	/*printf("entre a hash table get\n");*/
	if (!ht || !key)
		return (NULL);
	/*printf("antes de hacer el index\n");*/
	index = key_index((const unsigned char *)strdup(key), ht->size);
	/*printf("desp ht->array[index]: %lu key: %s\n",index, key);*/
	/*!ht->array[index]*/
	if (0 == 1)
	{
		/*printf("entre al if linea 22\n");*/
		return (NULL);
	}
	/*printf("antes de entrar al while y de asignar la head aux");*/
	aux = ht->array[index];
	while (aux)
	{
		if (strcmp((const char *)aux->key, key) != 0)
			aux = aux->next;
		/*printf("antes del strdup aux->value: %s \n", aux->value);*/
		ret = (char *)strdup(aux->value);
		/*printf("despues\n");*/
		break;
	}
	return (ret);
}
