#include "holberton.h"

/**
 * rev_string-  reverse a string
 * @s   : pointer to char. string to reverse
 * Return:  void
 * On error, -1 is returned, and errno is set appropriately.
 */
void rev_string(char *s)
{

	int i = 0;
	char revi;
	char revf;
	int j = 0;


	while (*(s + i) != '\0')
	{

		i++;

	}

	i -= 1;

	while (i  >= 0 && i != j)
	{

		revi = *(s + j);
		revf = *(s + i);
		*(s + i) = revi;
		*(s + j) = revf;

		i--;

		j++;

	}
}
