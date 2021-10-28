#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - prints buffer in hexa
 * @old_size: old size of the pointer to realloc
 * @new_size: new size that you gonna realoc
 * @ptr: the poiter that you gonna realloc
 * Return: the pointer in the new location
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pnew;

	if (new_size == old_size)
		return (ptr);

	pnew = malloc(new_size);
	if (pnew == 0)
		return (NULL);
	if (!ptr)
	{
		return (pnew);
	}

	if (new_size == 0 && ptr == 0)
	{
		free(ptr);
		return (NULL);
	}

	pnew = memcpy(pnew, ptr, old_size);
	free(ptr);
	return (pnew);
}
