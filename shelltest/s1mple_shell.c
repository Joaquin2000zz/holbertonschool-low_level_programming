#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

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
		}
	}
	else
		wait(NULL);

	return (0);
}

int main()
{
	char *buffer, **list, *aux = "$ ";
	int i = 0;
	size_t bufsize = 1024;
	ssize_t characters;

	buffer = malloc(1024);
	if (buffer == NULL)
		return (1);

	list = malloc(1024);
	while (1)
	{
		i = 0;
		write(1, aux, 2);

		characters = getline(&buffer, &bufsize, stdin);

		buffer[characters - 1] = 0;

		if (!list)
			return (1);

		list[i] = strtok(buffer, " ");

		while (list[i])
		{
			i++;

			list[i] = strtok(NULL, " ");

			if (!list[i])
				break;
		}

		list[i] = NULL; 

		getexeve(list);
		free(buffer);
		free(list);

	}
	return (0);
}
