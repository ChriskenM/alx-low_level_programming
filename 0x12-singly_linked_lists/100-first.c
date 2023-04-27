#include <stdio.h>

void begin(void) __attribute__ ((constructor));
/**
 *begin - the starting point
 *
 *Return: nothing
 */

void begin(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
