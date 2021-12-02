
#include <stdio.h>
#include <stdlib.h>

int input(char *s,int length);

int main()
{
	char *buffer;
	size_t bufsize = 32;
	size_t characters;

	buffer = malloc(bufsize * sizeof(char));
	if (buffer == NULL)
		exit(1);

	printf("$ ");
	characters = getline(&buffer,&bufsize,stdin);

	printf("%s\n", buffer);

	return (0);
}
