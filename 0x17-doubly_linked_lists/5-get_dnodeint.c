#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 *			   of a dlistint_t linked list.
 * @head:  address head node of the list
 * @index: index to find out
 * Return: returns the nth node of a dlistint_t linked list,
 *	   if the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp;
unsigned int count = 0;

temp = head;
while (temp != NULL)
{
	if (count == index)
		return (temp);
	count++;
	temp = temp->next;

}
return (NULL);
}

