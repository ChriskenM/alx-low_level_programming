#include <stdio.h>
#include "lists.h"

/**
 *listint_len - returns number of elements in a list
 *@h: list
 *
 *Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}
