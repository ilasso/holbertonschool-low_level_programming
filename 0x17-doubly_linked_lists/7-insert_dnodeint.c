#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node
 * @h:  head of a list
 * @idx:  position to add new node
 * @n:  new data node to add
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new = NULL, *prev = NULL, *post = NULL, *temp = *h;
unsigned int count = 0;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
	return (NULL);
new->n = n;
if (*h == NULL)
{	new->prev = NULL;
	new->next = NULL;
	*h = new; }
else
{
	if (idx != 0)
	{
		while (temp->next != NULL)
		{
			count == (idx - 1) ? (prev = temp) : (temp = temp);
			if (count == idx)
				break;
			temp = temp->next;
		count++; }
		if (idx > (count + 1))
			return (NULL);
		if (idx == (count + 1))
			{temp->next = new;
			new->prev = temp;
			return (new); }
		post = temp;
		post->prev = new;
		prev->next = new;
		new->prev = prev;
		new->next = post; }
	else
		{new->next = *h;
		new->prev = NULL;
		(*h)->prev = new;
		*h = new; } }
return (new);
}
