#include <stdio.h>

/**
 * main - Prints single digit numbers of base 0-10,
 *        only using putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
