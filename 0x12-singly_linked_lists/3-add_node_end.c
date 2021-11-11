#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: the structure
 * @str: the string to include in the node
 * Return: the new last node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *node_null;

	new_node = *head;

	node_null = malloc(sizeof(list_t));
		if (!node_null)
		{
			free(node_null);
			return (NULL);
		}

	node_null->str = strdup(str);
	node_null->len = strlen(str);
	node_null->next = NULL;

	if (!(*head))
	{
		*head = node_null;
		return (node_null);
	}

	while (new_node->next)
		new_node = new_node->next;



	new_node->next = node_null;

	return (node_null);
}
