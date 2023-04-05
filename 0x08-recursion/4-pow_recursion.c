#include "main.h"

/**
 *_pow_recursion - returns the value of x raised to the power of y.
 *@x: input int to be powered
 *@y: input int the power of x
 *
 *Return: -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	int output = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	output *= _pow_recursion(x, y - 1);
	return (output);
}
