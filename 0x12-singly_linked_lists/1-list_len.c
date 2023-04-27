#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *list_len - returns number of elements in linked list list_t
 *@h: header pointer
 *
 *Return: the count of elements
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}

