#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **y;

	if (width < 1)
		return (0);
	if (height < 1)
		return (0);

	y = malloc(height * sizeof(int *));

	if (y == 0)
	{
		return(NULL);
	}
	while (i < height)
	{	
		y[i] = malloc((width) * sizeof(int));
		if (y == 0)
		{
			while(i >= 0)
			{
				free(y[i]);
				i--;
			}
			free(y);

			return (NULL);
		}
		while (j < width)
		{
			y[i][j] = 0;
			j++;
		}
		i++;	
	}
	return (y);
}
