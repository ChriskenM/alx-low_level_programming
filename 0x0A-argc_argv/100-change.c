#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - prints minimum ammounts of coins to make change
 *@argc: argument counter
 *@argv: a string vector
 *
 *Return: -1 if number of arguments aint exact 1 else 0
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
		}
		else if (cents >= 5)
		{
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cents -= 2;
		}
		else if (cents >= 1)
		{
			cents -= 1;
		}
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}


