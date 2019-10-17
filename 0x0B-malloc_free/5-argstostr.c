#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr-function that concatenates all the arguments of your program.
 *		of integers.
 * @ac    : Q arguments
 * @av   : pointer to a string arguments
 * Return:   pointer to a new cat string
 * On error, -1 is returned, and errno is set appropriately.
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int qchars = 0;
	int totchars = 0;
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			qchars++; /* count total characteres whitout 0 command argument*/
		}
	}

	totchars = qchars + (ac - 1) ; /* add number arguments to \n  and \0 */

	a = (char *) malloc(totchars * sizeof(char));

	if (a == NULL)
		return (NULL);
	totchars = 0;

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*(a + totchars++) = av[i][j];
		}
		*(a + totchars++) = '\n';
	}
	*(a + totchars++) = '\0';

	return (a);
}
