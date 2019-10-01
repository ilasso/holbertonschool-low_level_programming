#include "holberton.h"

/**
 * _strlen   -  returns the length of a string.
 * @s : pointer to char
 * Return:  int
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{

		i++;

	}

	return (i);


}
