#include "holberton.h"
#include <stdio.h>
#include <strings.h>

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s :   input string
 * Return: length string int
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}

	i = 1 + _strlen_recursion(s + 1); /*va recorriendo pos x pos hasta '\0' */
					  /* va retornando el valor de i q va contando */

	return(i); 

}
