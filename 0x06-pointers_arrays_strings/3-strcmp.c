#include "main.h"

/**
* _strcmp - a funtion that compare strings
* @s1: first string to compare 
* @s2: second string to compare
* @n: the variable that determine the length of the string
* Return: the substraction within the diferent position compared in two strings
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
