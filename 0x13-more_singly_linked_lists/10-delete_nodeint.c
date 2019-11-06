#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index -function that deletes the node at index
 *			of a listint_t linked list.
 * @head:  head list
 * @index:  index to delete
 * Return:  pointer to struct index
 * On error, return NULL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *temp;
	listint_t *prev;
	unsigned int count;

	if (head ==  NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	count = 0;
	temp = *head;
	while (temp != NULL && count < index)
	{
		if (count == index - 1)
			prev = temp;
		count++;
		temp = temp->next;
	}

	if (temp == NULL)
	{
		return (-1);
	}

	prev->next = temp->next;
	free(temp);


	return (1);
}
