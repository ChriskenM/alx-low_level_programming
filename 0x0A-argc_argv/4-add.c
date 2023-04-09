#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *main - adds positive numbers
 *@sum: the addition result
 *
 *Return: 1 if the number contains symbols
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;
	char *list;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			list = argv[i];

			for (j = 0; j < strlen(list); j++)
			{
				if (list[j] < 48 || list[j] > 57)
				{
					printf("Error\n");
					return (0);
				}
			}
		sum = sum + atoi(list);
		list++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

