#include <stdio.h>
#include "main.h"

/**
* main - use a for to print the alphabet
*
* Return: Always 0.
*/
int print_alphabet(void)
{
char alphabet = 'a';

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	putchar(alphabet);
	putchar('\n');
	
	return (0);
}
