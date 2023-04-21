#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 *main - performs simple operations
 *@argc: argument counter
 *@argv: argument vector
 *
 *Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int (*prt), (int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	prt = get_op_func(argv[2]);

	if (!prt)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", prt(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
