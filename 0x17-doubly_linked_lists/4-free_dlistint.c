#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: the head node of a linked list
 * Return: void function without return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
