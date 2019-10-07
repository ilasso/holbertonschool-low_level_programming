#include "holberton.h"
#include <stdio.h>
#include <strings.h>

/**
 * _memcpy  - function that fills memory with a constant byte.
 * @dest :  memory area dest
 * @src :  memory area source
 * @n : number bytes to copy from src to dest
 * Return:  pointer a char
 * On error, -1 is returned, and errno is set appropriately.
 */



char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

	}

return (dest);
}
