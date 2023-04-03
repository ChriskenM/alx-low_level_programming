#include "main.h"

/**
 * _strpbrk - Function searches a string for any byte sets
 * @s: string to be searched
 * @accept: string to search from
 * Return: if set matches a pointer, if not NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
        return ('\0');
}
