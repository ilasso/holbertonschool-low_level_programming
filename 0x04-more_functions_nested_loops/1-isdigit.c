#include "holberton.h"

/**
 * _isdigit - say if a char is digit or no
 * @c: The character to print
 *
 * Return: On success 1. return 1 if is digit otherwise 0
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
