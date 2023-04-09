#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies two numbers
 *@mut: the multiple
 *@i: the int  to be multiplied
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
			mut = mut * atoi(argv[i]);
		}
		printf("%d\n", mut);
	}
	return (1);
}

