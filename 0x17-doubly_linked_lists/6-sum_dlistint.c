#include "lists.h"
/**
 * sum_dlistint- function that returns the sum of all
 *		 the data (n) of a dlistint_t linked list
 * @head:  address head node of the list
 * Return: returns the sum of all the data (n) of a dlistint_t linked list.
 *	   if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *temp;
int sum = 0;

if (head == NULL)
	return (0);

temp = head;
while (temp != NULL)
{
	sum += temp->n;
	temp = temp->next;

}
return (sum);
}

