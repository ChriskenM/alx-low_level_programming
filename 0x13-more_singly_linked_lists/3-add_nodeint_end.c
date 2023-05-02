#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_nodeint_end - adds node at the end of the list
 *@head: pointer to the head
 *@n: num int
 *
 *Return: address to new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = new;
			return (temp);
		}
	}
	return (NULL);
}


