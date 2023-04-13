#include <stdlib.h>
#include "main.h"

/**
 *string_nconcat - concatenates two strings.
 *@s1: string to concatenate
 *@s2: string to concatenate
 *@n: int count
 *
 *Return: if it fails return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	unsigned int a = 0, b = 0;
	char *s;

	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	if (n >= a)
	{
		b = i + a;
	}
	else
	{
		b = i + n;
	}
	s = malloc(sizeof(char) * b + 1);
	if (s == NULL)
		return (NULL);
	a = 0;
	while (j < b)
	{
		if (j < i)
		{
			s[j] = s1[j];
		}
		if (j > i)
		{
			s[j] = s2[a];
			a++;
		}
		j++;
	}
	s[j] = '\0';
	return (s);
}




