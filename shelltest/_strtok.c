#include <stdlib.h>
#include <stdio.h>

char **_strtok(char *str, char separator)
{
	char **tokList = malloc(1024), *auxToc;
	int i = 0, j = 0, tokLen = 0, k = 0, y = 0, exit = 0, e = 0;

	printf("entre a la funcion con string :%s y separador:%c \n", str, separator);
	for (i = 0; exit == 0; i++)
	{
		printf("--------------------------\n");
		printf("entre al for que recorre el string con pos: str[%d]\n", i);
		if (str[i] != separator)
		{
			tokLen++;
			printf("le sume a tokLen: %d", tokLen);
			printf("--------------------------\n");
		}
		if (str[i] == separator)
		{
			//tokLen++;
			auxToc = malloc(tokLen);
			 printf("le sume a tokLen: %d", tokLen);
                         printf("--------------------------\n");
			 printf("voy a hacer j = i(%d) - tokLen(%d)\n",i, tokLen);
			j = i - tokLen;
			 printf("j vale: %d\n", j);
			 printf("--------------------------\n");
			for (y = 0; y < tokLen; y++)
			{
				printf("entre al for q rellena filas\n");
				auxToc[y] = str[j];
				//tokList[k][y] = str[j];
				printf("aux[%d] = %c\n", y, auxToc[y]);
				j++;
			}
			tokList[k] = auxToc;
			printf("tokList[%d] %s\n", k, tokList[k]);
			 printf("--------------------------\n");
			k++;
			free(auxToc);
			tokLen = 0;
		}
		printf("--------------------------\n");
		if (k = 2)
		{
			for (e = 0; e < 2; e++)
                                printf("lista antes del if del ultimo string tokList[%d] = %s\n", e, tokList[e]);
                        printf("--------------------------\n");
		}
		if (!str[i + 1])
		{
			//tokLen++;
			 printf("le sume a tokLen: %d", tokLen);
                         printf("--------------------------\n");
                         printf("voy a hacer j = i(%d) - tokLen(%d)\n",i, tokLen);
			j = (i + 1) - tokLen;
			 printf("j vale: %d\n", j);
                         printf("--------------------------\n");
			for (y = 0; y < tokLen; y++)
			{
				//tokList[k][y] = str[j];
				printf("entre al for q rellena ultoma fila\n");
				auxToc[y] = str[j];
				printf("aux[%d] = %c\n", y, auxToc[y]);
				j++;
			}printf("--------------------------\n");
                         for (e = 0; e < 2; e++)
                                printf("lista dentro del for de la ultima linea de la funcion el la posicion tokList[%d] = %s\n", e, tokList[e]);
                        printf("--------------------------\n");
			tokList[k] = auxToc;
			printf("tokList[%d] %s\n", k, tokList[k]);
			 printf("--------------------------\n");
			 for (e = 0; tokList[e]; e++)
                		printf("lista dentro del for de la ultima linea de la funcion el la posicion tokList[%d] = %s\n", e, tokList[e]);
        		printf("--------------------------\n");
			k++;
			tokList[k] = 0;
			exit++;
		}
		for (e = 0; tokList[e]; e++)
                	printf("lista fuera del for de la ulima fila dentro de la funcion el la posicion tokList[%d] = %s\n", e, tokList[e]);
        	printf("--------------------------\n");
	}
	for (e = 0; tokList[e]; e++)
		printf("lista dentro de la funcion el la posicion tokList[%d] = %s\n", e, tokList[e]);
	printf("--------------------------\n");
	return (tokList);
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
