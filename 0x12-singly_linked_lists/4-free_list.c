#include <stdlib.h>
#include "lists.h"

/**
 *free_list - frees the leaks in list_t
 *@head: the beginning of linked list
 *
 *Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(head->str);
		free(temp);
	}
	free(head);
}
