#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *list_len-function that returns the number of elements in a linked list_t list
 * @h:  pinter to struct
 * Return: len of a list
 * On error, return NULL
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
