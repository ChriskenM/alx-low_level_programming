#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 *op_add - returns sum of a, b
 *@a: integer
 *@b: integer
 *
 *Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - returns subtraction of a, b
 *@a: integer
 *@b: integer
 *
 *Return: subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - returns product of a, b
 *@a: integer
 *@b: integer
 *
 *Return: multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - returns division of a, b
 *@a: integer
 *@b: integer
 *
 *Return: subtraction
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - returns the remainder of division
 *@a: integer
 *@b: integer
 *
 *Return: subtraction
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

