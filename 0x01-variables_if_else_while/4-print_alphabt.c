#include <stdio.h>
/**
* main - for
* Return: the alphabet in lowercases and in uppercases
*/

int main(void)
{
	char alphabet = 'a';
	char alphaBET = 'A';
	char n = '\n';

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	putchar(alphabet);
	for (alphaBET = 'A' ; alphaBET <= 'Z' ; alphaBET++)
	putchar(alphaBET);
	putchar(n);

	return (0);
}
