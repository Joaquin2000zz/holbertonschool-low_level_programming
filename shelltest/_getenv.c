#include <string.h>
#include <stdio.h>
#include "main.h"

extern char **environ;

//char *_getenv(const char *name)
{
	char **s = environ, *aux, **list, *getpath;
	int i = 0;

		while (s[i])
                {
                        i++;
			
			aux = _strdup(strstr(s[i], name));
			if (aux)
				break;
                        if (!s[i])
                                break;
		}

	list = tokenator(aux, "=");
	
	getpath = list[1];

	printf("%s\n", getpath);
	return (getpath);
}
