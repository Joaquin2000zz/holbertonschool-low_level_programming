#include <stdio.h>
/**
* main - for
* Return: counting
*/

int main(void)
{
	int i[2];

	i[0] = 48;
	i[1] = 49;
	
	while (i[0] <= 56)
	{
	if (i[0] == 48)
	{
	while (i[1] <= 57)
	{
	putchar(i[0]);
	putchar(i[1]);
	if (i[1] < 57)
	{
	putchar(',');
	putchar(' ');
	}
	i[1]++;
 	}
	}
	else if (i[0] == 49)
	{
	while (i[1] <= 57)
 	{
 	putchar(i[0]);
	putchar(i[1]);
	if (i[1] < 57)
	{
	putchar(',');
        putchar(' ');
        }
        i[1]++;
        }
	}
	else if (i[0] == 50)
	{
	while (i[1] <= 57)
	{
	putchar(i[0]);
	putchar(i[1]);
	if (i[1] < 57)
	{
	putchar(',');
	putchar(' ');
 	}
	i[1]++;
	}
	}
	else if (i[0] == 51)
 	{
	while (i[1] <= 57)
	{
	putchar(i[0]);
	putchar(i[1]);
	if (i[1] < 57)
	{
	putchar(',');
	putchar(' ');
	}
	i[1]++;
	}
	}
else if (i[0] == 52)
	{
	while (i[1] <= 57)
	{
	putchar(i[0]);
	putchar(i[1]);
	if (i[1] < 57)
 	{
 	putchar(',');
 	putchar(' ');
	}
	i[1]++;
 	}
	}
else if (i[0] == 53)
	{
	while (i[1] <= 57)
	{
	putchar(i[0]);
	putchar(i[1]);
	if (i[1] < 57)
	{
	putchar(',');
	putchar(' ');
	}
	i[1]++;
	}
	}
else if (i[0] == 54)
	{
	while (i[1] <= 57)
	{
	putchar(i[0]);
	putchar(i[1]);
	if (i[1] < 57)
 	{
 	putchar(',');
 	putchar(' ');
 	}
 	i[1]++;
 	}
 	}
else if (i[0] == 55)
 	{
 	while (i[1] <= 57)
 	{
 	putchar(i[0]);
 	putchar(i[1]);
 	if (i[1] < 57)
	{
 	putchar(',');
 	putchar(' ');
 	}
 	i[1]++;
 	}
 	}
else if (i[0] == 56)
 	{
 	while (i[1] <= 57)
 	{
 	putchar(i[0]);
	putchar(i[1]);
 	if (i[1] < 57)
	{
	putchar(',');
 	putchar(' ');
 	}
	i[1]++;
	}
	}

	i[0]++;
	}

 	return (0);
}
