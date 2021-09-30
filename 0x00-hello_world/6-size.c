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
	
	printf("Size of char: %zu bytes\n", sizeof(ola));
	printf("Size of int: %zu bytes\n", sizeof(como));
	printf("Size of estas: %zu bytes\n", sizeof(estas));
	printf("Size of todo: %zu bytes\n", sizeof(todo));
	printf("Size of bien: %zu bytes\n", sizeof(bien));

	return (0);
}
