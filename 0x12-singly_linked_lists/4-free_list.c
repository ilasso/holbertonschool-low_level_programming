#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list -  function that frees a list_t list.
 * @head:  pointer to struct
 * Return: size of a list
 * On error, return NULL
 */
void free_list(list_t *head)
{

	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
