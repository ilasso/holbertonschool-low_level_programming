#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - function that executes a function given as a parameter on
 *			each element of an array.
 * @array: int array
 * @size: size of array
 * @action: point to a function
 * Return: void
 * On error, return NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = size;

	void (*funcion)(int);

	if (action == NULL || array == NULL)
		return;

	funcion = action;

	for (i = 0; i < size; i++)
	{
		funcion(array[i]);
	}
}
