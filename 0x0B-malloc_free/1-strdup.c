#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

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
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)

	len = i;

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len + 1; i++)
	{
		s[i] = str[i];
	}

	s[len + 1] = '\0';

	return (s);

}
