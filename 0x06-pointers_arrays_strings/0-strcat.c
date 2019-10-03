#include "holberton.h"
#include <stdio.h>

/**
 * _strcat    - function that concatenate src to dest
 * @dest   : string dest
 * @src   : string origin
 * Return:   pointer to char
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	char *a;

	a = dest; /*save inic address dest to goback */


	while (*dest != '\0')
	{
		i++; /* obtain null character */
		dest++; /*go to last position of array */

		if (*dest == '\0') /* evaluate final firts string to add another*/
		{
			while (*src != '\0')
			{
				*dest = *src;	/*reclace \0 whit firts character other string */
				dest++;
				src++;
			}
		}

	}

	dest = a; /* goback to the original position */


	return (dest);

}
