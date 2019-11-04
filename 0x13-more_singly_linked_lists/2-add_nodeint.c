#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - function that adds a new node at the beginning of a listint_t list.
 * @h:  pointer to head of a list
 * @n:  data int of new element
 * Return: size of a list
 * On error, return NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		printf("Error\n");
		return(NULL);
	}

	new->n = n;
	new->next = *head;

	*head = new ;

	return (*head);
}
