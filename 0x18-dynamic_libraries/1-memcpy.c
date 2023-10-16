#include "main.h"

/**
 * _memcpy -  function copies n bytes from memory area src to memory area dest
 * @dest: destination string
 * @src: source string to copy from
 * @n: number of bytes
 *
 * Return: pointer to @dest destination buffer.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
