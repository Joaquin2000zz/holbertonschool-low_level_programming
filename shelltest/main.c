#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char ** main()
{
	char *buffer, **list;
	int i = 0, j = 0;
	size_t bufsize = 1024;
	ssize_t characters;

	buffer = (char *)malloc(bufsize * sizeof(char));
	if (buffer == NULL)
		exit(1);

	printf("$ ");
	
	characters = getline(&buffer, &bufsize, stdin);

	buffer[characters - 1] = 0;

	list = malloc(1024);
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

	while (list[j])
	{
		printf("%s ", list[j]);
		j++;
	}
	putchar(10);

	return (list);
}
