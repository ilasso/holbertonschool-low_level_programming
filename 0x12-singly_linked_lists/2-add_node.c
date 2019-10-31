#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head:  pointer to last node created, or inic list
 * Return:  pointer to new element
 * On error, return NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;


	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
