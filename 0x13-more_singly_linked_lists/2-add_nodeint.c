#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint-function that adds a new node at the beginning listint_t list.
 * @head:  address pointer to head of a list
 * @n:  data struct
 * Return: adrress pointer new head
 * On error, return NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	new->n = n;
	new->next = *head;

	*head = new;

	return (*head);
}
