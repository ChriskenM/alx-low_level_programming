#include "main.h"

/**
 *
 * islower - Check if char is lowercase
 * c: is the char to be checked
 * Return: 1 if chaar is lowercaase else return 0
 */

int islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
