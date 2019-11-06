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
	unsigned int count = 0;

	if (head ==  NULL || (*head == NULL && idx != 0))
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx  == 0)
	{
		new->next = *head;
		new->n = n;
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp != NULL)
	{
		if (count == (idx - 1))
		{
			new->n = n;
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		count++;
		temp = temp->next;
	}
	if (idx > (count - 1))
	{
		free(new);
		return (NULL);
	}
	return (NULL);
}
