#include "main.h"

/**
* print_alphabet_x10 - print the alphabet 10 times
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
	int i;
	int alphabet;

	for(i=0 ; i <= 10 ; i++)
	{	_putchar('\n');
		for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
			_putchar(alphabet);
	}
}
