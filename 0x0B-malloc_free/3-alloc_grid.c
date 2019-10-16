#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid-function that returns a pointer to a 2 dimensional array
 *		of integers.
 * @width    : width
 * @height   : height
 * Return:   pointer to a 2 dimensional array of integers
 * On error, -1 is returned, and errno is set appropriately.
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **a;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	if (width == 1 && height == 1)
		return (NULL);

	a = (int **) malloc(height * sizeof(*a));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] =  (int *) malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;

		}
	}

	return (a);
}
