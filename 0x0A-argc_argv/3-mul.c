#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - multiplies two numbers
 *@mut: the multiple
 *@i: the int  to be multiplied
 *@argc: argument count
 *@argv: a vector of strings
 *
 *Return: 1 if argc < 1
 */

int main(int argc, char *argv[])
{
	int i, mut = 0;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			mut = atoi(argv[i]) * atoi(argv[i]);
		}
		printf("%d\n", mut);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

