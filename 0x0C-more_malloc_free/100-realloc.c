#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *_realloc - reallocates a memory block using malloc and free
 *@old_size: the allocated space for ptr(bytes)
 *@new_size: new size for new memory block
 *
 *Return: NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *cptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		cptr = malloc(new_size);
		if (cptr == NULL)
			return (NULL);
		return (cptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	cptr = malloc(new_size);
	if (cptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size; && i < new_size; i++)
	{
		cptr[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (cptr);
}



