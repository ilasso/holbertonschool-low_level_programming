#include "holberton.h"
#include <stdio.h>
#include <string.h>

int _pow_recursion(int x, int y);
/**
 * binary_to_uint-function that converts a binary number to an unsigned int
 * @b:  string to convert
 * Return: the converted number, or 0 if there is one o more chars diff 0 or 1
 *	   string is null
 * On error, return NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int suma = 0;
	int i = 0;
	int len = 0;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
	;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		suma += _pow_recursion(2, (len - 1)) * (b[i] - '0');
		i++;
		len--;
	}
	return (suma);

}
/**
 * _pow_recursion - function that returns the value of x raised
 *			to the power of y exponet
 * @x :   input base
 * @y :   input exponent
 * Return: int
 * On error, -1 is returned, and errno is set appropriately.
 */

int _pow_recursion(int x, int y)
{
	int i;

	if (y == 0)
	{
		return (1);
	}

	if (y < 0)
	{
		return (-1);
	}
	i = y - 1;
	return (x * _pow_recursion(x, i));
}
