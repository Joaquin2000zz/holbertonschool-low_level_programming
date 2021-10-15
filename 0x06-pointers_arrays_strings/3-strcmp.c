#include "main.h"

/**
* _strcpy - a funtion that copy strings
* @dest: the variable that saves the copied string
* @src: the variable that brings the string that you need to copy
* @n: the variable that determine the length of the string
* Return: src copied in dest
*/

int _strcmp(char *s1, char *s2)
{
	int i, valresult;

	i = 0;

	while (((s1[i] != 0) && (s2[i] != 0)) && s1[i] == s2[i])
	{
		i++;
	}
		valresult = s1[i] - s2[i];
	return (valresult);
}
