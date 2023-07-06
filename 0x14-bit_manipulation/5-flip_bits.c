#include "main.h"

/**
 * flip_bits - function return number of bits that
 * you flip to get one number to another
 * @n: first number
 * @m: second number
 *
 * Return: bits number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int j;

	for (j = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			j++;
	}
	return (j);
}
