#include <stdlib.h>
#include "main.h"

/**
 *binary_to_uint - converts a binary to int number
 *@b: pointer to binary
 *
 *Return: converted int or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 0, len = 0, sum = 0;


	if (b == NULL)
		return (0);

	len = _strlen(b);
	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);

		if (b[len] == 49)
		{
			sum += 1 << j;
		}
		j++;
	}
	return (sum);
}

/**
 *_strlen - returns string length
 *@s: count
 *
 *Return: string length
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

