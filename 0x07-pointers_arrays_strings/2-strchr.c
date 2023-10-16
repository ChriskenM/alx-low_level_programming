#include "main.h"

/**
 *_strchr - Entry point
 * or NULL if the character is not found.
 *@s: the string to be searched
 *@c: the character to look for
 *
 *Return: Always 0 (success)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);

	}
	return ('\0');
}
