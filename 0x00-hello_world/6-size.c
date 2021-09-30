#include <stdio.h>
/**
 * main - prints the size of various variable's types
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ola;
	int como;
	float estas;
	long int todo;
	long long int bien;

	printf("Size of a char: %zu byte(s)\n", sizeof(ola));
	printf("Size of an int: %zu byte(s)\n", sizeof(como));
	printf("Size of a long int: %zu byte(s)\n", sizeof(todo));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(bien));
	printf("Size of a float: %zu byte(s)\n", sizeof(estas));

	return (0);
}
