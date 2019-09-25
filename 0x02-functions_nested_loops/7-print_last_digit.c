#include "holberton.h"
/**
 * print_last_digit -  return abs value to a number
 * @n: argument input to evaluate
 * Return: last digit
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
int lastdigit;

	lastdigit = n % 10;

	if (lastdigit < 0)
	{
		lastdigit = lastdigit * -1;
	}

	_putchar(lastdigit + '0');

	return (lastdigit);

}
