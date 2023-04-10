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
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

