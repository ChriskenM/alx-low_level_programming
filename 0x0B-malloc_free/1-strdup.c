#include <stdlib.h>
#include "main.h"

/**
 *_strdup - return pointer to newly allocated space in memory(duplicate string)
 *@str: string to duplicate
 *
 *Return: pointer to duplicated string if succesfull else NULL
 */

char *_strdup(char *str)
{
	int i = 0, j = 1;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[j])
	{
		j++;
	}
	s = malloc((sizeof(char) * j) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < j)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
