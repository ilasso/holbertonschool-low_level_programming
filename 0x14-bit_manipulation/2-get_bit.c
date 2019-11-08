#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n:  number to obtain bit
 * @index:  index bit
 * Return: bit by index
 * On error, return -1
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if ((n == 0 || n == 1) && index != 0)
		return (-1);

	if (index > (sizeof(n) * 8 - 1))
		return (-1);

	if (n & (1 << index))
		return (1);

	return (0);
}
