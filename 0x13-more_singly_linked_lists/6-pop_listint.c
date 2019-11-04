#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - function that frees a listint_t list 
 * @head:  pointer to head of a list
 * Return: size of a list
 * On error, return NULL
 */
int pop_listint(listint_t **head)
{

	listint_t *temp;
	int n;

	n = (*head)->n;

	
	temp = (*head)->next ;
	free(*head);
	*head = temp;

	return(n);

}
