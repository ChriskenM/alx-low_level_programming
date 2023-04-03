#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area pointed to by s
 * @s: pointer to buffer
 * @n: number of bytes to be filled
 * @c: char to fill the area
 * Return: a pointer to the memory area.
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
