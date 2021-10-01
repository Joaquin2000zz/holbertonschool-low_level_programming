#include <stdio.h>
/**
* main - for
* Return: the alphabet in lowercases and in uppercases
*/

int main(void)
{
	char alphabet = 'a';
	char alphaBET = 'A';

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	putchar(alphabet);
	putchar('\n');
	for (alphaBET = 'A' ; alphabet <= 'Z' ; alphabet++)
	putchar(alphabet);
	putchar('\n');

	return (0);
}
