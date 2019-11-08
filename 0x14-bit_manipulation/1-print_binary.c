#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * print_binary-function that prints the binary representation of a number.
 * @n:  decimal to print binary notation
 * Return: void
 * On error, return NULL
 */
void print_binary(unsigned long int n)
{
	unsigned long int a = 1;
	unsigned long int b = 0;
	unsigned long int maindigit;
	unsigned long int count = 0;

	if (n == 0)
	{
		_putchar(48);
		return;
	}
	/* find binary digit most significative */
	while (b < n)
	{
		b += n & a;
		a = a << 1;
		count++;
	}

	maindigit = 1 << (count - 1); /* most singniticative true bit*/

	if (n > INT_MAX)
		maindigit = n;

	/* evaluate bit to bit to print*/

	while (maindigit > 0)
	{

		if (n & maindigit)
			_putchar(49);
		else
			_putchar(48);

		maindigit = maindigit >> 1;

	}

}
