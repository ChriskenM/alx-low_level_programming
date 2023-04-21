#include <stdlib.h>
#include <stdio.h>

/**
 *main - prints the opcodes of its own main function.
 *@argc: argument counter
 *@argv: argument vector
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int j, i;
	int (*addr)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	j = atoi(argv[1]);

	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < j; i++)
	{
		opcode = *(unsigned char *)addr;
		printf("%.2x", opcode);

		if (i == j - 1)
			continue;
		printf(" ");

		addr++;
	}
	printf("\n");
	return (0);
}

