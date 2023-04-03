#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 *          pointed to by @s with the constant byte @c.
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{

        unsigned int i;
	char *buffer = s, value = b;

	for (i = 0; i < n; i++)
	{
		buffer[i] = value;
	}

	return (buffer);
}
