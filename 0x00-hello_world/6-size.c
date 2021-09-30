#include <stdio.h>
/**
 * main - prints the size of various types on the computer it is compiled and run on
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ola;
	int como;
	float estas;
	long int todo;
	long long int bien;
	
	printf("Size of char: %zu byte(s)\n", sizeof(ola));
	printf("Size of int: %zu byte(s)\n", sizeof(como));
	printf("Size of long int: %zu byte(s)\n", sizeof(todo));
	printf("Size of long long int: %zu byte(s)\n", sizeof(bien));
	printf("Size of float: %zu byte(s)\n", sizeof(estas));

	return (0);
}
