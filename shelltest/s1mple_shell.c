#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
extern char **environ;
struct stat st;
/**
 * getexeve - get the exeve
 *
 * Return: Always 0.
 */
int getexeve(char **argv)
{
	int pid;
	pid = fork();
	if (pid == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Error:");
			return(1);
		}
		
	}
	else
		wait(NULL);

	return (0);
}

int main()
{
	char *buffer, **listArgv = malloc(1024), **environAux = environ, *aux = "$ ";
	char *PATH_, **contPATH, **routesPATH, *auxRoute = malloc(1024), *auxRouteCat = malloc(1024), *newbuffer = malloc(1024);
	int i = 0, status = 4;
	size_t bufsize = 1024;
	ssize_t characters;
	listpath_t *head = NULL, *firsthead = NULL;
	for (i = 0; environAux[i]; i++)
		PATH_ = _strdup(strstr(environAux[i], "PATH"));
	contPATH = _strtok(PATH_, '=');
	routesPATH = _strtok(contPATH[1], ':');
	 printf("funciono");
	for (i = 0; routesPATH[i]; i++)
	{
		path_linked_list(&head, _strdup(routesPATH[i]));
		if (i = 0)
			(firsthead = head);
	}
	 printf("funciono");
	buffer = malloc(1024);
	if (buffer == NULL)
		return (1);
 printf("funciono");
	head = firsthead;
	while (1)
	{
		firsthead = head;
		status = 4;
		write(1, aux, 2);

		characters = getline(&buffer, &bufsize, stdin);

		buffer[characters - 1] = 0;

		if (!listArgv)
			return (1);

		listArgv = _strtok(buffer, ' ');
		
		while (firsthead)
		{
			auxRoute = _strdup(firsthead->route);
				
			newbuffer = strcat(buffer, "/");
			auxRouteCat = strcat(auxRoute, newbuffer);
			
			status = stat(auxRouteCat, &st);
			if(status == 0)
			{
				freezer(listArgv[0]);
				listArgv[0] = strdup(auxRouteCat);
				getexeve(listArgv);
			}
			else
			{
				firsthead = firsthead->next;
				free(auxRoute);
				free(auxRouteCat);
			}
			if (status == 1)
				break;
		}

		getexeve(listArgv);
		free(buffer);
		free(listArgv);


	}
	return (0);
}
