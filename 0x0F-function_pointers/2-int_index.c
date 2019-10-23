#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - function that searches for an integer.
 * @array: int array
 * @size: size of array
 * @cmp: point to a function
 * Return: index
 * On error, return NULL
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = size;

	int (*funcion)(int);

	funcion = cmp;

	for (i = 0; i < size; i++)
	{
		if (funcion(array[i]))
			return (i);
	}
return (i);
}
