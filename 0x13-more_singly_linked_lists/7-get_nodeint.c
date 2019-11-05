#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index -function that returns the nth node of a
 *			listint_t linked list.
 * @head:  head list
 * @index:  index to find
 * Return:  pointer to struct index
 * On error, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *temp;
	unsigned int count;

	if (head ==  NULL)
		return (NULL);

	count = 0;
	temp = head;
	while (temp != NULL && count < index)
	{
		count++;
		temp = temp->next;
	}

	if (temp == NULL)
		return (NULL);


	return (temp);
}
