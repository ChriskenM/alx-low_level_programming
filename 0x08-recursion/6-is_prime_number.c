#include "main.h"

int divisible_by(int i, int div);
int is_prime_number(int n);

/**
 *divisible_by - finds divisibility of ints
 *@i: to be checked
 *@div: the divisor
 *
 *Return: 0 if div with no rem else 1
 */

int divisible_by(int i, int div)
{
	if (i % div == 0)
	{
		return (0);
	}
	if (div == i/2)
	{
		return (1);
	}
	return (divisible_by(i, div + 1));
}

/**
 *is_prime_number - checks if number is prime
 *@n: number to be checked
 *
 *Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return(0);
	}
	if (n >= 2 && n <= 3)
	{
		return(1);
	}
	return (divisible_by(n, div));
}




