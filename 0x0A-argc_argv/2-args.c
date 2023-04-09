#include <stdio.h>
#include "main.h"

/**
 *main -  prints all arguments it receives
 *@argc: argument counter
 *@argv: a string vector
 *
 *Return: Always 0 (successful)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

        }

	return (0);
}
