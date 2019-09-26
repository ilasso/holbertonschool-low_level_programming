#include "holberton.h"

/**
 * print_square -  prints a square, followed by a new line. if size <=0 only
 *		print a new line
 * @size : size of square
 * Return:  void
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar ('\n');
		return;
	}

	for (i = 0; i < size - 1 ; i++)
	{
		_putchar ('#');

		for (j = 0; j < size - 1 ; j++)
		{
			_putchar ('#');
		}
			_putchar ('\n');

	}


}
