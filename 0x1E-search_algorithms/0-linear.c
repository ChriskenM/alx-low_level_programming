#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * of intergers.
 * @array: pointer to the first element
 * @value: the number to search for.
 * @size: total elements in an array
 *
 * Return: value of the element found,
 * else if NULL return -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
