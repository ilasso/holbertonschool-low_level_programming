#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in
 *		  a linked dlistint_t list.
 * @h:  address head node
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *temp;
size_t count = 0;

temp = h;

while (temp != NULL)
{
	temp = temp->next;
	count++;

}
return (count);
}

