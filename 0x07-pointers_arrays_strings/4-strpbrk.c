#include "main.h"

/**
 * _strpbrk - Eunction locates the first occurrence in the string s of any of the bytes in the string accept
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
