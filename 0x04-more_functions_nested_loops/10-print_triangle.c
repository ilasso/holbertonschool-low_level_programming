#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size : size of square
 * Return:  void
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar ('\n');
		return;
	}

	if (size == 1)
	{
		_putchar ('#');
		_putchar ('\n');
		return;
	}


	for (i = 1; i <= size ; i++)
	{
		for (j = 0; j < size  ; j++)
		{
			if (j < (size - i))
			{
				_putchar (' ');
			}
			else
			{
			_putchar ('#');
			}
		}
			_putchar ('\n');

	}


}
