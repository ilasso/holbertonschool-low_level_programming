#include "holberton.h"

/**
 * swap_int  -  function that swaps the values of two integers.
 * @a : pointer to int
 * @b : pointer to int
 * Return:  void
 * On error, -1 is returned, and errno is set appropriately.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;


}
