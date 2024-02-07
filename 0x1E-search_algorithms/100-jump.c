#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: If value is not present in array or if array is NULL,
 * your function must return -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, start, end;

	if (array == NULL || size == 0)
		return (-1);

	end = sqrt(size);
	for (i = start = 0; start < size && array[start] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		i = start;
		start += end;
	}

	printf("value found between indexes [%ld] and [%ld]\n", i, start);

	start = start < size - 1 ? start : size - 1;
	for (; i < start && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
