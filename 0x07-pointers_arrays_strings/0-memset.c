#include "holberton.h"
#include <stdio.h>
#include <strings.h>

/**
 * _memset  - function that fills memory with a constant byte.
 * @s : pointer a string
 * @b : constant by to fill
 * @n : number bytes to fill
 * Return:  pointer a char
 * On error, -1 is returned, and errno is set appropriately.
 */



char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;

	}

return (s);

}

