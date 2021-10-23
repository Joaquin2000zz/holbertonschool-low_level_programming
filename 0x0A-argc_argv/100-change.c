#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	int a = 25, b = 10, c = 5, d = 2, e = 1, change = 0, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (change <= 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		change = atoi(argv[1]);
		while (change >= a)
		{
			i++;
			change = change - a;
		}
		if (change == 0)
		{
			printf("%d\n", i);
			return (0);
		}
		else
		{
			while (change >= b && change < a)
			{
				i++;
				change = change - b;
			}
			if (change == 0)
			{
				printf("%d\n", i);
				return (0);
			}
			else
			{
				while (change >= c && change < b)
				{
					i++;
					change = change - c;
				}
				if (change == 0)
				{
					printf("%d\n",i);
					return (0);
				}
				else
				{
					while (change >= d && change < c)
					{
						i++;
						change = change - d;
					}
					if (change == 0)
					{
						printf("%d\n", i);
						return (0);
					}
					else
					{
						while (change >= e && change < d)
						{
							i++;
							change = change - e;
						}
						printf("%d\n", i);
						return (0);
					}
				}
			}
		}
		
	}
}
