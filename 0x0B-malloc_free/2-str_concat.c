#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *str_concat - function that concatenates two strings.
 *@s1: string to concatenate
 *@s2: string to concatenate
 *
 *Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int a = 0, b = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	b = i + j;
	s = malloc((sizeof(char) * 1) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (a < b)
	{
		if (a <= i)
		{
			s[a] = s1[a];
		}
		if (a >= i)
		{
			s[a] = s2[j];
			j++;
		}
		a++;
	}
	s[a] = '\0';
	return (s);
}
