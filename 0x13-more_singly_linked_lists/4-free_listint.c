#include <stdlib.h>
#include "lists.h"

/**
 *free_listint - frees list
 *@head: pointer to the head
 *
 *Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
