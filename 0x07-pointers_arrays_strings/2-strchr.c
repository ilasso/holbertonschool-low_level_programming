#include "holberton.h"
#include <stdio.h>
#include <strings.h>

/**
 * _strchr  - function that locates a character in a string.
 * @s :   input string
 * @c :  character to find firts occurrence
 * Return:  pointer a char
 * On error, -1 is returned, and errno is set appropriately.
 */



char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		};
	};
	if (s[i] == '\0')
	{
		return (s + i);
	};
return (NULL);
}
