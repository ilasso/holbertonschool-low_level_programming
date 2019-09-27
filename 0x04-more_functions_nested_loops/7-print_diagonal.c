#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @size : size of square
 * Return:  void
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar ('\n');
		return;
	}

	if (n == 1)
	{
		_putchar ('#');
		_putchar ('\n');
		return;
	}


	for (i = 0; i < n ; i++)
	{
		for (j = 0; j < n ; j++)
		{
			if (j == i)
			{
				_putchar ('\\');
			}
			else
			{
			_putchar (' ');
			}
		}
			_putchar ('\n');

	}


}
