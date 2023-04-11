#include <stdlib.h>
#include "main.h"

/**
 *create_array - creates an array of chars and initializes with a secific char
 *@c: the char to fill up the array
 *@size: size of the array
 *
 *Return: a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}


