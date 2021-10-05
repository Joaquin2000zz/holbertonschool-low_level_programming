#include "main.h"

/**
* main - use a for to print the alphabet
*
* Return: Always 0.
*/
int print_alphabet(char alphabet)
{
alphabet = 'a';
	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	_putchar(alphabet);
	_putchar('\n');
}
