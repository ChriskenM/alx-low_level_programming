#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_listp2 - frees list
 *@head: head of linked list
 *
 *Return: nothing
 */

void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *cur;

	if (head != NULL)
	{
		cur = *head;

		while ((temp = cur) != NULL)
		{
			cur = cur->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 *free_listint_safe - frees list
 *@h: head of linked list
 *
 *Return: size of freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t j = 0;
	listp_t *hptr, *new, *sum;
	listint_t *cur;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		sum = hptr;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (*h == sum->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (j);
			}
		}
		cur = *h;
		*h = (*h)->next;
		free(cur);
		j++;
	}
	*h = NULL;
	free_listp2(&hptr);
	return (j);
}
