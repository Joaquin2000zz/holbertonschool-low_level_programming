#include <string.h>
#include <stdio.h>

extern char **environ;

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

	list[j] = strtok(aux, "=");
	
	while (list[j])
        {
                j++;

                list[j] = strtok(NULL, "=");

                if (!list[j])
                       break;
        }

        list[j] = NULL;
	
	getpath = list[1];

	printf("%s\n", getpath);
	return (getpath);
}

int main()
{
	_getenv("PATH");
}
