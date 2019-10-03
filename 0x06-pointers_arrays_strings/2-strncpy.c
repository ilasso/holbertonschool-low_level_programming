#include "holberton.h"
#include <stdio.h>
#include <strings.h>

/**
 * _strncpy   - function that concatenate n chars of src to dest
 * @dest   : string dest
 * @src   : string origin
 * @n : quantity characters to add a dest
 * Return:   pointer to char
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{

		dest[i] = src[i];
		i++;

	}
	while (i < n)
	{

		dest[i] = '\0';
		i++;

	}

	return (dest);

}
