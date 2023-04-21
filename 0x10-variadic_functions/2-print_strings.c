#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_strings - prints strings
 *@n: number of strings passsed on function
 *@separator: separates elements string to be printed btwn strings
 *
 *Return: NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *s;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(args, n);

		while (i < n)
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", s);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(args);
	}
	printf("\n");
}

