#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy    - function that copy strings
 * @dest   : string dest
 * @src   : string origin
 * Return:  void
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;


	}
	*(dest + i) = '\0';

	return (dest);


}
