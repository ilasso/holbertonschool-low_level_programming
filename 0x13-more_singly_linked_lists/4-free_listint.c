#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - function that frees a listint_t list
 * @head:  pointer to head of a list
 * Return: size of a list
 * On error, return NULL
 */
void free_listint(listint_t *head)
{

	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
