#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_listp - frees list
 *@head: list head
 *
 *Return: nothing
 */

void free_listp(listp_t **head)
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
 *print_listint_safe - prints linked list
 *@head: head of list
 *
 *Return: number of nodes in lidt.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t j = 0;
	listp_t *hptr, *new, *sum;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		sum = hptr;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (head == sum->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (j);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		j++;
	}
	free_listp(&hptr);
	return (j);
}
