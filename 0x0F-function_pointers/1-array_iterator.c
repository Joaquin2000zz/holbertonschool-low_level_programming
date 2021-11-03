#include <stddef.h>

/**
 * array_iterator - excecute a function in every interation into a array
 * @array: array that you gonna iterate
 * @size: size of the array
 * @action: the function to excecute in the array
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && array)
	{
	for (i = 0; i < size; i++)
		action(array[i]);
	}
	else
		return;
}
