#include "main.h"

/**
 *binary_to_uint - converts a binary to int number
 *@b: pointer to binary
 *
 *Return: converted int or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int len, binr;

	if (!b)
		return (0);

	i = 0;
	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, binr = 1; len >= 0; len--, binr *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			i += binr;
		}
	}
	return (i);
}
