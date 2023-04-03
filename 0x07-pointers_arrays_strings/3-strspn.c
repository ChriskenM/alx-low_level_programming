#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial segment of s which consist only of bytes from accept
 * @s: the string to be searched
 * @accept: to be measured
 *
 * Return: number of bytes in s which consist of accept bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int initial_length = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				initial_length++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (initial_length);
		}
		s++;
	}
	return (initial_length);
}

