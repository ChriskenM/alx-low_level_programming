#include <stdlib.h>
#include "main.h"

/**
 *array_range - creates an array of integers.
 *@min: the least int
 *@max: the maximum int in range
 *
 *Return: NULL if it fails
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
