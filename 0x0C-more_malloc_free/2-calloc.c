#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements of array to allocate
 * @size: size to allocate
 *
 * Return: pointer to allocate mem or 98 if it fails.
 * On error, 98 is returned, and errno is set appropriately.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = (char *) malloc(nmemb * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		a[i] = 0;
	}
	return (a);
}
