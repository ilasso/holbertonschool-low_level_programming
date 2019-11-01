#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head:  pointer to last node created, or inic list
 * @str:  string to store to node
 * Return:  pointer to new element
 * On error, return NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	;
	new->str = strdup(str);
	new->len = i;

	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;

		}
		temp->next = new;

	}
	return (new);
}
