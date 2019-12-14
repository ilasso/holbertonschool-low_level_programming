#include "lists.h"
/**
 * free_dlistint - function that free a dlistint_t list.
 * @head:  address head node of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

temp = head;

while (temp != NULL)
{
	free(temp);
	temp = temp->next;

}
}

