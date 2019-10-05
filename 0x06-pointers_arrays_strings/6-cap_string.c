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
	int i = 0;

	b = a;

	while (*a != '\0')
	{
		if (*a == ' ' || *a == '\n' || *a == '!' || *a == '\t' || *a == 46)
		{
			a++;

			if (*a == '\n' || *a == ' ')
			{
				a++;
			}
			if (*a >= 97 && *a <= 122)
			{
				*a -= 32;
			}
		}
		else
		{
			if (*(a + 0) >= 97 && *(a + 0) <= 122 && i == 0)
			{
				*(a + 0) -= 32;
			}
		}
		a++;
		i++;
	}
	a = b;
	return (a);
}
