#include "function_pointers.h"

/**
 *array_iterator - executes a function given as a parameter
 *on each array
 *@size: size of the array
 *@action: a pointer to the function you need to use
 *@array: array to iterate
 *
 *Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array != NULL && action != NULL && size > 0)
	{
		while (j < size)
		{
			action(array[j]);
			j++;
		}
	}
}
