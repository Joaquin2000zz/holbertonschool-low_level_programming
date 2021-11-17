#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node by index
 * @head: the linked list
 * @index: index of the node that you gonna delete
 * Return: status operation. 1 in success and -1 in fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next, *aux;
	unsigned int i = 1;

	next = *head;
	aux = *head;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = aux->next;
		free(aux);
		return (1);
	}

	while (i < index - 1)
	{
		if (!next)
			break;
		if (i == index)
		{
			aux = next->next;
			next->next = next->next;
			free(aux);
			return (1);
		}

		next = next->next;
		i++;
	}

	return (-1);
}
