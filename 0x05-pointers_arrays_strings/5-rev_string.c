#include "main.h"

/**
* rev_string - Write a function that reverses a string.
* @s: the pointer with the string
* Return: the string.
*/

void rev_string(char *s)
{
	int n, i;
	char *A = 0;
	for (n = 0; s[n] != '\0'; n++)
		A[n] = s[n];
	while (A[n] != n - 1)
		{	
			s[i] = A[n];
			n++;
			i--;
		}
}
