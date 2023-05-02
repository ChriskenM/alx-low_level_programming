#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - inserts node at a given index
 *@head: head node pointer
 *@idx: the index
 *@n: num
 *
 *Return: address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *i;
	unsigned int j = 1;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		if (idx > 0)
		{
			i = *head;
			while (i)
			{
				if (j == idx)
				{
					new->next = i->next;
					i->next = new;
					return (new);
				}
				i = i->next;
				j++;
			}
			if (idx > j)
				return (NULL);
		}
		else
		{
			new->next = *head;
			*head = new;
		}
		return (new);
	}
	return (NULL);
}
