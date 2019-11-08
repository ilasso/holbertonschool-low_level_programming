#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n:  pointer to number to set a bit in 0
 * @index:  index bit
 * Return: bit by index
 * On error, return -1 on error  and 1 ok
 */
int clear_bit(unsigned long int *n, unsigned int index)
{


	if (index > (sizeof(*n) * 8 - 1))
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
