#include "holberton.h"
#include <stdlib.h>

/**
 * create_array -function that creates an array of chars,
 *		and initializes it with a specific char.
 * @size: size array
 * @c: char to inicializate array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *a = (char *) malloc(size * sizeof(c));

	if (size == 0)
	{
		return (NULL);
	}


	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
