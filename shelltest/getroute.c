#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct listpath_s
{
	char *route;
	struct listpath_s *next;
} listpath_t;

extern char **environ;
int getroute(char *getpath);
listpath_t *path_linked_list(listpath_t **head, const char *str);

char *_getenv(const char *name)
{
	char **s = environ, *aux, **list, *getpath;
	int i = 0, j = 0;

		while (s[i])
		{
			i++;

			aux = strstr(s[i], name);
			if (aux)
				break;
			if (!s[i])
				break;
		}

	list = _strtok(aux, '=');

	getpath = strdup(list[1]);

	printf("%s\n", getpath);
	printf("antes de llamar a get route\n");
	getroute(getpath);
	return (getpath);
}

int main()
{
	
	_getenv("PATH");
}

int getroute(char *getpath)
{
	listpath_t *head = NULL;
	char **list, *aux = getpath;
	int i = 0, j = 0;

	list = _strtok(aux, ':');
	printf("antes de entrar al while del getroute\n");

	while (list[i])
	{
		printf("%s\n", list[i]);
		path_linked_list(&head, list[i]);
		i++;
	}

	return (0);
}

listpath_t *path_linked_list(listpath_t **head, const char *str)
{
	listpath_t *new_node;
	listpath_t *node_null;

	new_node = *head;

	node_null = malloc(sizeof(listpath_t));
		if (!node_null)
		{
			free(node_null);
			return (NULL);
		}

	node_null->route = strdup(str);
	node_null->next = NULL;

		printf("node: %s\n", node_null->route);
	if (!(*head))
	{
		*head = node_null;
		return (node_null);
	}

	while (new_node->next)
	{
		new_node = new_node->next;
	}
	new_node->next = node_null;
	return (node_null);
}
