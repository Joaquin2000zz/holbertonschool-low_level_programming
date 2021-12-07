#include "main.h"

/**
  * freezedLinkedList - frees nodep format node's list
  * @pathLink: the linked list
  * Return: void because only is to free the nodep format nodes's list
  */

void freezedLinkedList(listpath_t *pathLink)
{
	listpath_t *tmpReference;

	while (pathLink)
	{
		tmpReference = pathLink;
		pathLink = pathLink->next;
		free(tmpReference->route);
		free(tmpReference);

	}
}

/**
 * freezedInputLine - frees input lines saved in getline
 * @argsLine: the input obtained with getline
 * Return: void because only is to free the input pointer
 */

void freezedInputLine(char *argsLine)
{
	free(argsLine);
}
