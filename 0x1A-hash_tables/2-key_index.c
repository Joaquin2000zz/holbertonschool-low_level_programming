#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: the key of the array hash
 * @size: size of the array of the table
 * Return: the inex at the key value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2((const unsigned char *)strdup((const char *)key)) % size);
}
