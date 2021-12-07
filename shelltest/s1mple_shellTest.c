#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>

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
	char *buffer, **listArgv, *aux = "$ ";
	char *PATH_, **contPATH, *routePATH, *auxRoute = malloc(1024), *auxRouteCat = malloc(1024), *newbuffer = malloc(1024);
	int i = 0, status = 4;
	size_t bufsize = 1024;
	ssize_t characters;
	listpath_t *head;
	
	PATH_ = _getenv("PATH");
	printf("funciono\n");
	if (buffer == NULL)
		return (1);
	while (1)
	{
		head = NULL;
		buffer = malloc(1024);
		listArgv = malloc(1024);
		status = 4;
		write(1, aux, 2);

		characters = getline(&buffer, &bufsize, stdin);

		buffer[characters - 1] = 0;

		if (!listArgv)
			return (1);

		listArgv = _strtok(buffer, ' ');
		if (buffer[0] == '/')
		{
			getexeve(listArgv);
			//free(buffer);
			//free(listArgv);
		}
		if (buffer[0] != '/')
		{
			printf("entre a if para verificar ruta\n");
			routePATH = getroute(PATH_, listArgv[0]);
			printf("consegui path %s\n", routePATH);
			freezer(listArgv[0]);
			listArgv[0] = routePATH;
			printf("argv[0] = %s\n", listArgv[0]);
			printf("--------------------------------------------------------------------\n\n");
			getexeve(listArgv);
		}
	}
	return (0);
}
