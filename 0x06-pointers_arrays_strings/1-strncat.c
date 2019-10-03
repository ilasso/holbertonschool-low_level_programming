#include "holberton.h"

/**
 * _strncat    - function that concatenate n chars of src to dest
 * @dest   : string dest
 * @src   : string origin
 * @n : quantity characters to add a dest
 * Return:   pointer to char
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 1;
	char *a;

	a = dest; /*save inic address dest to goback */


	while (*dest != '\0')
	{
		dest++; /*go to last position of array */

		if (*dest == '\0') /* evaluate final firts string to add another*/
		{
			while (*src != '\0' && i <= n) /* only add n characteres src to dest*/
			{
				*dest = *src;	/*reclace \0 whit firts character other string */
				dest++;
				src++;
				i++;
			}
		}

	}

	*dest = '\0'; /*put last character to "new" dest */

	dest = a; /* goback to the original position */


	return (dest);

}
