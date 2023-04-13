#include <stdlib.h>
#include "main.h"

/**
 *_calloc - allocates memory for an array, using malloc
 *@size: size of elements
 *@nmemb:number of elements
 *
 *Return: function returns NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *c;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	j = nmemb * size;
	c = malloc(j);
	if (c == NULL)
	{
		return (NULL);
	}
	while (i < j)
	{
		c[i] = 0;
		i++;
	}
	return (c);
}

