#include "holberton.h"
#include <stdio.h>
#include <strings.h>

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
	if (y == 0)
	{
		return (1);
	}

	if (y == 1)
	{
		return (1);
	}

	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
