#include "holberton.h"
#include <stdio.h>

/**
 * print_array- function that prints n elements of an array of integers,
 *		followed by a new line.
 * @a   : pointer to array of int
 * @n   : array size
 * Return:  void
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_array(int *a, int n)
{

	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);

		}

	}
		printf("\n");

}
