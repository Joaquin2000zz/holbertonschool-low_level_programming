#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int v = 0;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{	
				v++;
			}
			else
			{
				break;	
			}
		}
		
	}
	
	return (v);
}
