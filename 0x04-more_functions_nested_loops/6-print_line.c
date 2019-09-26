#include "holberton.h"

/**
 * print_line -  draws a straigth line in the terminal
 * @n : number times _ char shout be print
 * Return:  void
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar ('_');
		}

	}
	_putchar ('\n');

}
