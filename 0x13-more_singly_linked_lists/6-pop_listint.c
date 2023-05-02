#include <stdlib.h>
#include "lists.h"

/**
 *pop_listint - removes the head of list
 *@head: pointer to the head of a list
 *
 *Return: 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int n = 0;

	if (*head != NULL)
	{
		new = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new;
	}
	return (n);
}
