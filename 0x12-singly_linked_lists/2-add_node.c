#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - add nodes in a linked list
 * @head: head of the list
 * @str: content to duplicate and add in the new node
 * Return: the new head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
		if (!new_node)
		{	return (NULL);
			free(new_node);
		}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
