#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 *add_node_end - add node at the end of the list
 *@head: beginning of linked list
 *@str: string to duplicate
 *
 *Return: address of new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first_node, *temp;

	if (str != NULL)
	{
		first_node = malloc(sizeof(list_t));
		if (first_node == NULL)
			return (NULL);

		first_node->str = strdup(str);
		first_node->len = _strlen(str);
		first_node->next = NULL;

		if (*head == NULL)
		{
			*head = first_node;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = first_node;
			return (temp);
		}
	}
	return (NULL);
}

/**
 *_strlen - length string
 *@s: the string
 *
 *Return: the count
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}
