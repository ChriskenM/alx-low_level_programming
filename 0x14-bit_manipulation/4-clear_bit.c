#include "main.h"

/**
 *clear_bit - sets bit to 0 at a given index
 *@n: pointer to unsigned int
 *@index: bit index
 *
 *Return: 1 if succesful or -1 if error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}


