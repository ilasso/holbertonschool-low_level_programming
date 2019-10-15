#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

	char *s = (char *) malloc(sizeof(char) * strlen(str)+1);
	unsigned int i;
	unsigned int len;

	/* len */
	for ( len = 0; *str != '\0'; len++)


	printf("tamaño=%ld-%ld\n",sizeof(char)*strlen(str)+1,len);

	if (str == NULL)
	{
		return (NULL);
	}

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}


	return (s);

}
