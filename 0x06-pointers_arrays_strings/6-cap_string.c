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

	b = a; /*save initial pointer position*/


	while (*a != '\0')
	{
		/* checke if a is a letter */

		if (*a == 32 || *a == 9 || *a == 10 || *a == 46)
		{
			a++;

			if (*a == 10)
			{
				a++;
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
