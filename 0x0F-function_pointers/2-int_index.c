#include "function_pointers.h"

/**
 *int_index - searches for an interger
 *@size: number of elements in an array
 *@cmp: pointer to a function to be used to compare values
 *@array: array to compare in
 *
 *Return: -1 if no element matches or if  size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (j < size)
			{
				if (cmp(array[j]))
					return (j);
				j++;
			}
		}
	}
	return (-1);
}

