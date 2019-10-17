#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size to allocate
 *
 * Return: pointer to allocate mem or 98 if it fails.
 * On error, 98 is returned, and errno is set appropriately.
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
