#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function that creates an array of integers.
 * @min: number min value
 * @max: number max value
 *
 * Return: pointer to allocate mem
 * On error, return NULL
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *a;
	int values;

	if (min > max)
		return (NULL);

	a = (int *) malloc((max - min + 1) * sizeof(int));

	if (a == NULL)
		return (NULL);

	values = 0;

	for (i = min; i  <= max; i++)
	{
		a[values] = i;
		values++;
	}
	return (a);
}
