#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *argstostr - concatenates all the arguments of your program
 *@ac: argument count (argc)
 *@av: argument vector (argv)
 *
 *Return: a pointer to a new string else NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int ch = 0, i = 0, j = 0, a = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		while (av[i][j])
		{
			ch++;
			j++;
		}
		j = 0;
		i++;
	}
	s = malloc((sizeof(char) * ch) + ac + 1);
	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			s[a] = av[i][j];
			a++;
			j++;
		}
		s[a] = '\n';
		j = 0;
		a++;
		i++;
	}
	a++;
	s[a] = '\0';
	return (s);
}

