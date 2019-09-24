#include "holberton.h"
/**
 * print_sign -  print the sign of a number
 * @n: argument input to evaluate
 * Return: 1 if n is greater than zero, 0 if n is zero,
 * -1 if n is less than zero
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}


	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
		_putchar('-');
		return (-1);

}
