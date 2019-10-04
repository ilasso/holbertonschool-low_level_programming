#include "holberton.h"
#include <stdio.h>
#include <strings.h>

/**
 * reverse_array  - function that concatenate n chars of src to dest
 * @a : array integers
 * @n    : number of elements of the array
 * Return:  integer
 * On error, -1 is returned, and errno is set appropriately.
 */
void reverse_array(int *a, int n)
{
	int sw = 0;
	int i = 0;
	
	n--;

	while (i < n)
	{
		sw = a[i];
		a[i] = a[n];
		a[n] = sw;
		i++;
		n--;
	}
}
