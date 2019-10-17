#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements of array to allocate
 * @size: size to allocate
 *
 * Return: pointer to allocate mem
 * On error, return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = (void *) malloc(nmemb * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		a[i] = 0;
	}
	return (a);
}
