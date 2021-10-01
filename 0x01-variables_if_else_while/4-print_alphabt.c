#include <stdio.h>
/**
* main - for
* Return: the alphabet in lowercases and in uppercases
*/

int main(void)
{
	char alphabet = 'a';
	char alphaBET = 'A';
	char n = '\n'

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	putchar(alphabet, n);
	for (alphaBET = 'A' ; alphaBET <= 'Z' ; alphaBET++)
	putchar(alphaBET, n);

	return (0);
}
