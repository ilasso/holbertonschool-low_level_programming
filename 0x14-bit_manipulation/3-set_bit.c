#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * set_bit - function that returns the value of a bit at a given index
 * @n:  pointer to number to set a bit in 1
 * @index:  index bit
 * Return: bit by index
 * On error, return -1 on error  and 1 ok
 */
int set_bit(unsigned long int *n, unsigned int index)
{


	if (index > (sizeof(*n) * 8 - 1))
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
