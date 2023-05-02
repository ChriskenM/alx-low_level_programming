#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_nodeint_at_index - returns nth node of a list
 *@head: pointer to the beginnig of linked list
 *@index: index of node to get
 *
 *Return: NULL if node doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

	if (head)
	{
		while (head)
		{
			if (j == index)
				return (head);

			head = head->next;
			j++;
		}
	}
	return (NULL);
}
