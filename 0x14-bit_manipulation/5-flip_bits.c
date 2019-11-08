#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * flip_bits -function that returns the number of bits you would
 *		need to flip to get from one number to another.
 * @n:  number 1
 * @m:  number 2
 * Return: like descrition
 * On error, return -1 on error  and 1 ok
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	int count = 0;

	a = n ^ m;

	while (a != 0)
	{
		count += a & 1;
		a >>= 1;
	}

	return (count);
}
