#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end-function that adds new node at the end of a listint_t list.
 * @head:  pointer to head of a list
 * @n:  data int of new element
 * Return: size of a list
 * On error, return NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;

		}
			temp->next = new;

	}

	return (new);
}
