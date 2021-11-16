#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: the linked list
 * Return: sum of al the data n
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	if (!head)
		return (0);
	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
