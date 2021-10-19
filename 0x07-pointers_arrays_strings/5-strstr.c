#include "main.h"

/**
* _strstr - check the code
*@haystack: 
*@needle:
* Return: Always 0.
*/

char * _strstr(char *haystack, char *needle)
{
	int p1 = 0, p2 = 0;

	if (*needle == 0)
		return (haystack);
	else
	{	
		while (haystack[p1])
		{
			while(needle[p2] && haystack[p1] == needle[0])
			{
				if (haystack[p2 + p1] == needle[p2])
					p2++;
				else
					break;
			}
	
		if (needle[p2])
		{
			p1++;
			p2 = 0;
		}
		else
			return (haystack + p1);	
		}
	}
		return (0);
}
