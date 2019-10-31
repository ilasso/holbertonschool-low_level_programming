#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list -  function that prints all the elements of a list_t list.
 * @h:  pinter to struct
 * Return: size of a list
 * On error, return NULL
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	int len;
	char *s;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			s = "(nil)";
			len = 0;
		}
		else
		{
				s = h->str;
				len = h->len;
		}
		printf("[%d] %s\n", len, s);
		h = h->next;
		count++;
	}
	return (count);
}
