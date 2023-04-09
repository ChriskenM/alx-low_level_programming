#include <stdio.h>
#include "main.h"

/**
 *main - program prints its name
 *@argc: argument index
 *@argv: a vector of strings
 *
 *Return: Always 0 (successful)
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
