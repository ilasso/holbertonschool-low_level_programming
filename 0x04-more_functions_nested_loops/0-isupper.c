#include "holberton.h"

/**
 * _isupper - retur 1 if UPPER, 0 if lower
 * @c: The character to print
 *
 * Return: On success 1. return 0 if is upper otherwise return 0
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
