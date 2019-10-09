#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums -  function that prints the sum of the two diagonals of a
 *			square matrix of integers.
 * @a    :   pointer to  array int
 * @size :   pointer to  int. size matriz.
 * Return: void
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int suma1 = 0;
	int *b;
	int suma2 = 0;

	b = a;


	/*suma1 += *b;*/

	while (i < (size * size))
	{
		suma1 += *b;
		i += (size + 1);
		b += (size + 1);
	}

	i =  size;

	b = a + size - 1; /* go to inic another diagonar*/

	while (i < (size * size))
	{
		suma2 += *b;
		i += (size - 1);
		b += (size - 1);

	}
	b = a; /*restart pointer*/

	printf("%d, %d\n", suma1, suma2);
}
