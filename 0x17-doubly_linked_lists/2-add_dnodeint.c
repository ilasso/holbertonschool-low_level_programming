#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning
 *		  of a dlistint_t list.
 * @head:  head of a list
 * @n:  new data node to add
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

new = malloc(sizeof(dlistint_t));

if (new == NULL)
	return (NULL);

new->n = n;

if (*head == NULL)
{
	new->next = NULL;
}
else
{
	new->next = *head;
	(*head)->prev = new;
}
new->prev = NULL;
*head = new;
return (*head);
}

