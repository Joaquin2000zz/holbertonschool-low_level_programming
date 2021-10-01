#include <stdio.h>
/**
* main - for
* Return: the alphabet
*/

int main(void)
{
	int num;
	int ch = 0;
	for (num = 48 ; num <= 57 ; num++)
	putchar(num);
	while ((ch = getchar()) != '\n' && ch != EOF);
	return (0);
}
