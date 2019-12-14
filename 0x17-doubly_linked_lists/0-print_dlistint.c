#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h:  address head node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *temp;
size_t count = 0;

temp = h;

while (temp != NULL)
{
	printf("%d\n", temp->n);
	temp = temp->next;
	count++;

}
return (count);
}

