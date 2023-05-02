#include <stdlib.h>
#include "lists.h"

/**
 *reverse_listint - reverses order of linked list
 *@head: pointer to the head
 *
 *Return: pointer to the first node of reversed string
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (head)
	{
		while (*head)
		{
			next = *head;
			*head = (*head)->next;
			next->next = prev;
			prev = next;
		}
		*head = prev;
		return (*head);
	}
	return (NULL);
}
