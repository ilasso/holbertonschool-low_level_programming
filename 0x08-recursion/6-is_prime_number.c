#include "holberton.h"
#include <stdio.h>
#include <strings.h>


int prime_number(int n, int divisor);

/**
 * is_prime_number- function that returns 1 if the input integer is
 *		    a prime number, otherwise return 0.
 * @n :   input number
 * Return: int
 * On error, -1 is returned, and errno is set appropriately.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	if (prime_number(n, 2))
	{
		return (1);
	}

	return (0);

}
/**
 * prime_number - local function that returns 1 if the input integer is
 *		    a prime number, otherwise return 0.
 * @n :   input number
 * @divisor :   input divisor, increment unit n
 * Return: int
 * On error, -1 is returned, and errno is set appropriately.
 */

int prime_number(int n, int divisor)
{
	if ((n / 2) < divisor)
	{
		return (1);
	}
	else
	{
		if ((n % divisor) == 0)
		{
			return (0);

		}
		else
		{
			return (prime_number(n, divisor + 1));
		}
	}
}
