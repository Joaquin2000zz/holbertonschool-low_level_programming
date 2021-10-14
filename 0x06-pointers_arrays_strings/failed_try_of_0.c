#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/

char *_strcat(char *dest, char *src)
{
	int n, m, w, p, q;

	p = 0;
		for (n = 0; dest[n] != '\0'; n++)
				;
		for (m = 0; src[m] != '\0'; m++)
				;
		for (w = n; dest [w] != (m + 1); w++)
			{
			q = n;
			dest[q] = src [p];
			p++;
			q++;
			}
		return(dest);
}
