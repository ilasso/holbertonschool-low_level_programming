#include "holberton.h"
/**
 * _abs -  return abs value to a number
 * @n: argument input to evaluate
 * Return: 1 if n is greater than zero, 0 if n is zero,
 * -1 if n is less than zero
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}

		return (n);

}
