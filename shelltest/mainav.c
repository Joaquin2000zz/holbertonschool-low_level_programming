#include <stdio.h>

int main(int ac , char **av)
{
	int i;

	for (i = 0; av[i]; i++)
		if (av[i + 1])
			printf("%s ", av[i]);
		else
			printf("%s", av[i]);

	putchar(10);

	return (0);
}
