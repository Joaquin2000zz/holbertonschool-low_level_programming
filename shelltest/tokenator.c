#include "main.h"
#include <stddef.h>
#include <string.h>

char **tokenator(char *str, const char *separator)
{
	int j = 0;
	char **list;

	list[j] = strtok(str, separator);

		while (list[j])
	        {
	                j++;

	                list[j] = strtok(NULL, separator);

        	        if (!list[j])
				break;
		}
		list[j] = NULL;
	return (list);
}
int main(void)
{
	char **list, *str = "hola=como=estas";
	const char *separator = "=";
	list = tokenator(str, separator);
	return (0);
}

