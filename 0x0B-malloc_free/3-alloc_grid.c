#include <stdlib.h>
#include "main.h"

/**
 *alloc_grid - function that returns a pointer to a 2D array of integers.
 *@height: dimensional height
 *@width: dimensional width o farray
 *
 *Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j, c, d;
	int **a;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			a[c][d] = 0;
		}
	}
	return (a);
}



