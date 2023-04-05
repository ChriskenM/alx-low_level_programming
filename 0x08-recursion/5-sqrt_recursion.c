#include "main.h"

int find_sqrt(int i, int root);
int _sqrt_recursion(int n);

/**
 *find_sqrt - finds square roots
 *@i: int to find
 *@root: to be tested
 *
 *Return: root or -1
 */

int find_sqrt(int i, int root)
{
	if ((root * root) == i)
	{
		return (root);
	}
	if (root == i / 2)
	{
		return (-1);
	}
	return (find_sqrt(i, root + 1));
}

/**
 *_sqrt_recursion - returns the natural square root of a number.
 *@n: int to check for square root
 *
 *Return: -1 if @n doesnt have a square root
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (find_sqrt(n, root));
}









