#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

extern char **environ;


char *_getenv(const char *name)
{
	char **s = environ, *aux, **list, *getpath;
	int i = 0, j = 0;

		while (s[i])
		{
			i++;

			aux = _strdup(strstr(s[i], name));
			if (aux)
				break;
			if (!s[i])
				break;
		}

	list = _strtok(aux, '=');

	getpath = strdup(list[1]);

	printf("%s\n", getpath);
	printf("antes de llamar a get route\n");

	return (getpath);
}

char *getroute(char *getpath, char *firstarg)
{
	listpath_t *head = NULL;
	char **list, *aux = getpath, *auxRoute = malloc(1024), *newbuffer = malloc(1024);
	int i = 0, j = 0;
	struct stat  st;

	list = _strtok(aux, ':');
	printf("antes de entrar al while del getroute\n");

	while (list[i])
	{
		printf("%s\n", list[i]);
		path_linked_list(&head, list[i]);
		i++;
	}

	while (head)
	{
		auxRoute = _strcat(head->route, "/");
		newbuffer = _strcat(auxRoute, firstarg);
		printf("ruta posible %s\n", newbuffer);
		printf("-------------------------------------\n");
		head = head->next;
		stat(newbuffer, &st);
		if ((st.st_mode & S_IFMT) == S_IFREG)
		{
			
			printf("ruta obtenida %s\n", newbuffer);
			return (newbuffer);

		}
		else
		{
			freezer(auxRoute);
			freezer(newbuffer);
		}
	}

	return("error");
}

listpath_t *path_linked_list(listpath_t **head, char *str)
{
	listpath_t *aux_node;
	listpath_t *end_node;

	aux_node = *head;

	end_node = malloc(sizeof(listpath_t));
		if (!end_node)
		{
			free(end_node);
			return (NULL);
		}

	end_node->route = strdup(str);
	end_node->next = NULL;

		printf("node: %s\n", end_node->route);
	if (!(*head))
	{
		*head = end_node;
		return (end_node);
	}

	while (aux_node->next)
	{
		aux_node = aux_node->next;
	}
	aux_node->next = end_node;
	return (end_node);
}

/**
* _strcat - check the code
* @dest: the variable to be joined with src
* @src: the variable to be joined with dest
* Return: dest and src merged.
*/

char *_strcat(char *dest, char *src)
{
	int n, l;

	n = 0;

	while (dest[n])
		n++;

	for (l = 0; src[l] != '\0'; l++)
	{
		dest[n] = src[l];
		n++;
	}

		return (dest);
}
