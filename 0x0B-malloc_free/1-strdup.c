#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup -function that returns a pointer to a newly allocated space
 *	    in memory, which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strdup(char *str)
{
	char *s = (char *) malloc(sizeof(str));
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		*(s + i) = *str;
		str++;
	}
	return (s);

}
