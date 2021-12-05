#include <stdlib.h>
#include <stdio.h>

int freezer(char *str);


/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: string to copy
 *
 * Return: *ptr to the duplicate string or NULL if it failed
 */
char *_strdup(char *str)
{
	unsigned int pos, len;
	char *dup;

	if (!str)
		return (NULL);

	for (len = 0; str[len] != 0;)
		len++;

	dup = (char *)malloc((sizeof(char) * len + 1));

	if (dup == NULL)
		return (NULL);

	for (pos = 0; pos <= len; pos++)
	{
		dup[pos] = str[pos];
	}
	return (dup);
}

char **_strtok(char *str, char separator)
{
	char *tokList[1024], **tokListReturn, auxTok[1024];
	int exit = 0, i = 0, j = 0, k = 0, y = 0, e = 0, tokLen = 0;

	for(i = 0; exit == 0; i++)
	{
		if (str [i] != separator)
		{
			tokLen++;
		}
		if (str[i] == separator)
		{
			j = i - tokLen;
			for (y = 0; y < tokLen; y++)
			{
				auxTok[y] = str[j];
				j++;
			}
			tokList[k] = _strdup(auxTok);
			freezer(auxTok);
			tokLen = 0;
			k++;
		}

		if (!str[i + 1])
		{
			j = (i + 1) - tokLen;

			for (y = 0; y < tokLen; y++)
			{
				auxTok[y] = str[j];
				j++;
			}
			tokList[k] = _strdup(auxTok);
			freezer(auxTok);

			tokList[k + 1] = 0;
			exit++;
		}
	}
	tokListReturn = tokList;
	return (tokListReturn);
}

int main(void)
{
	int i;
	char *str = "hola=chau=uwu";
	char separator = '=';
	char **list = _strtok(str, separator);
	for (i = 0; list[i]; i++)
	{	
		printf("------------------------------------\n");
		printf("%s\n",list[i]);
	}
	return (0);
}

int freezer(char *str)
{
	int i;
	if (!str)
		return(-1);
	for (i = 0; str[i]; i++)
	{
		str[i] = 0;
	}
	return (0);
}
