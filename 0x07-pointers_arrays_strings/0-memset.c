#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * 
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
