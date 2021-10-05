#include "main.h"

/**
* print_alphabet - use a for to print the alphabet
* 
* Return: Always 0.
*/
void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	_putchar(alphabet);
	_putchar('\n');
}
