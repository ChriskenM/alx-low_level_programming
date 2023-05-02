#include <stdlib.h>
#include "lists.h"

/**
 *sum_listint - sums up elements in a linked list
 *@head: pointer to the head node
 *
 *Return: 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	if (head)
	{
		while (head)
		{
			total += head->n;
			head = head->next;
		}
	}
	return (total);
}
