#include "holberton.h"

/**
 * print_numbers - say if a char is digit or no
 *
 * Return:  void
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9 ; i++)
	{
		_putchar (i + '0');
	}
	_putchar ('\n');

}
