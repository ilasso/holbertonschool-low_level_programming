#include "holberton.h"
#include <stdio.h>
#include <strings.h>

/**
 * *string_toupper - function that convert to UPPER a string
 * @a : pointer a string
 * Return:  integer
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_toupper(char *a)
{
	char *b;

	b = a; /*save initial pointer position*/


	while (*a != '\0')
	{
		/* checke if a is a letter */

		if (*a >= 97 && *a <= 122) /* if lowercase */
		{

			*a -= 32; /*convert to uppercase*/

		}

		a++;
	}

	a = b;

	return (a);

}
