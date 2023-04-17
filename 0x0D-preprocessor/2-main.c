#include <stdlib.h>

/**
 *main - prints the name of the file it was compiled from
 *FILE: expands to the name of the current input file
 *
 *Return: 0 upon success
 */

int main(void)
{
	printf("%S\n" __FILE__);
	return (0);
}
