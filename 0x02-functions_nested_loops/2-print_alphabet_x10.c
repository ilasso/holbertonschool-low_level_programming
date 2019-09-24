#include "holberton.h"
/**
 * print_alphabet_x10 - writes alphabet 10 times to stdout
 *
 * Return: void
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{

	int n = 0;
	int m = 0;

	for (n = 0; n < 10 ; n++)
	{

		for (m = 97; m < 123; m++)
		{
			_putchar(m);
		}
		_putchar(10);
	}
}
