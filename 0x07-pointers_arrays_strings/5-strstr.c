#include "main.h"

/**
 * _strstr - finds a substring
 * @haystack: the string to be searched
 * @needle: the substring being searched
 * Return: if substring is located a pointer, if not return NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do
			{	if (needle[i +1] == '\0')
					return (haystack);
				i++;
			}
			while (haystack[i] == needle[i]);
		}
	}
	return ('\0');
}


