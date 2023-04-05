#include "main.h"

/**
 *factorial - returns the factorial of a given number.
 *@n: factorial to be checked
 *@output: the result
 *
 *Return: -1 to indicate an error
 */

int factorial(int n)
{
	int output = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	output *= factorial(n - 1);
	return (output);
}
