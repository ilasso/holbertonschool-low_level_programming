#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head:  pointer to last node created, or inic list
 * @str:  string to store to node
 * Return:  pointer to new element
 * On error, return NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head;
	*head = new;
	return (new);
}
