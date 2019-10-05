#include "holberton.h"
#include <stdio.h>
#include <strings.h>

/**
 * cap_string     - function that convert to UPPER a string
 * @a : pointer a string
 * Return:  pointer a char
 * On error, -1 is returned, and errno is set appropriately.
 */
char *cap_string(char *a)
{
	char *b;

	b = a;
	while (*a != '\0')
	{
		if (*a == ' ' || *a == '\n' || *a == '!' || *a == '\t' || *a == 46)
		{
			a++;

			if (*a == '\n')
			{
				a++;
			}
			if (*a == '\0')
			{
				break;
			}
			if (*a >= 97 && *b <= 122)
			{
				*a -= 32;
			}
		}
		a++;
	}
	a = b;
	return (a);
}
