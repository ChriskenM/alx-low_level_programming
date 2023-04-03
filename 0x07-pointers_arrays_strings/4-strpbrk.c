#include "main.h"

/**
 *_strpbrk - Entry point
 *@s: string to be searched
 *@accept: string to search from
 *Return: Always 0 (success)
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
