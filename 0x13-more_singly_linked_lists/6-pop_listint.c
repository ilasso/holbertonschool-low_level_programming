#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - function that deletes the head node of a listint_t
 *		linked list, and returns the head node’s data (n)
 * @head:  pointer to head of a list
 * Return: deleted data
 * On error, return NULL
 */
int pop_listint(listint_t **head)
{

	listint_t *temp;
	int n;

	n = (*head)->n;

	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);

}
