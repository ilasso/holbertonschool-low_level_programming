#include "holberton.h"
#include <stdio.h>
#include <strings.h>


int _sqrt(int n, int init);

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n :   input number square
 * Return: int
 * On error, -1 is returned, and errno is set appropriately.
 */

int _sqrt_recursion(int n)
{

	return (_sqrt(n, 0));

}
/**
 * _sqrt - Local function that returns the natural square root of a number.
 * @n :   input number square
 * @init :  number init to evaluate
 * Return: int
 * On error, -1 is returned, and errno is set appropriately.
 */

int _sqrt(int n, int init)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	if (init * init > n)
	{
		return (-1);
	}

	if (init * init == n)
	{
		return (init);
	}

	return (_sqrt(n, init + 1));


}
