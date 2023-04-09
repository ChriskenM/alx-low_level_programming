#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds positive numbers
 *@sum: the addition result
 *
 *Return: 1 if the number contains symbols
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
	{
		printf("%d\n", 0);
	}
	else if ((argc >= 'a' && argc <= 'z')) || ((argc >= 'A' && argc <= 'Z'))
	{
		printf("Error %s\n");
		return (1);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
}
