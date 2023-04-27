#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_node - adds new node at the beggining
 *@head: the beggining node
 *@str: string
 *
 *Return: address of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);
	}
	return (0);
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
