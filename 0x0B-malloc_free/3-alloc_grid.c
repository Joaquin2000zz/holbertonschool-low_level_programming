#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **y;

	if (width < 1 || height < 1)
		return (NULL);

	y = malloc(height * sizeof(*y));

	if (y == 0)
		return (NULL);

	while (i < height)
	{
		y[i] = malloc((width) * sizeof(int));
		if (y == 0)
		{
			while (i >= 0)
			{
				free(y[i]);
				i--;
			}
			free(y);

			return (NULL);
		}
		while (j < width)
		{
			j++;
		}
		i++;
	}
	return (y);
}
