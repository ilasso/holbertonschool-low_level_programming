#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *insert_nodeint_at_index-function that inserts a new node at a given position.
 * @head:  head list
 * @idx:  position to insert new element of the list
 * @n:  data new element
 * Return:  pointer to new element of  the list
 * On error, return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *temp;
	listint_t *new;
	listint_t *prev;
	listint_t *post;
	unsigned int count;

	if (head ==  NULL)
		return (NULL);
	count = 0;
	temp = *head;
	prev = NULL;
	post = NULL;

	while (temp != NULL)
	{
		if (count == idx)
			post = temp;
		if (count == idx - 1)
			prev = temp;
		count++;
		temp = temp->next;
	}
	if (idx > count - 1)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->n = n;
	new->next = post;
	prev->next = new;

	return (new);
}
