#include "holberton.h"
/**
 * print_alphabet - writes the alphabet lowercase  to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{

	int n = 97;

	for (n = 97; n < 123; n++)
	{
		_putchar(n);
	}
	_putchar(10);


}
