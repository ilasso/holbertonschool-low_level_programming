#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index of a dlistint_t linked list
 * @head:  head of the list
 * @index:  position to del node
 * Return: the address of the new element, or NULL if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *todel = NULL, *prev = NULL, *post = NULL, *temp = *head;
unsigned int count = 0;

if (*head == NULL || head == NULL)
	return (-1);
while (temp->next != NULL)
{
	if (count == index)
		break;
	temp = temp->next;
	count++;
}
if (count <= index) /*invalid index*/
	return (-1);
if (temp->next == NULL && temp->prev == NULL)/*lastone & unique node*/
{	todel = temp;
	*head = NULL;
	free(todel);
	return (1); }
if (index == 0) /*if del the firts node*/
{	todel = temp;
	temp = temp->next;
	temp->prev = NULL;
	*head = temp;
	free(todel);
	return (1); }
if (temp->next == NULL && count > 1)/*last node but nonunique*/
{	todel = temp;
	temp = temp->prev;
	temp->next = NULL;
	free(todel);
	return (1); }
prev = temp->prev;
post = temp->next;
prev->next = post;
post->prev = prev;
temp->prev = NULL;
temp->next = NULL;
free(temp);
return (1);
}
