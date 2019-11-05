#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - function that returns the sum of all the data (n) of
 *		 a listint_t linked list
 * @head:  head list
 * Return:  pointer to struct index
 * On error, return NULL
 */
int sum_listint(listint_t *head)
{

	listint_t *temp;
	int suma;

	if (head ==  NULL)
		return (0);

	suma = 0;
	temp = head;
	while (temp != NULL)
	{
		suma += temp->n;
		temp = temp->next;
	}

	return (suma);
}
