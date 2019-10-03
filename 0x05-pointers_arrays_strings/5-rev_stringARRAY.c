#include "holberton.h"
#include <stdio.h>

/**
 * rev_string-  reverse a string
 * @s   : pointer to char. string to reverse
 * Return:  void
 * On error, -1 is returned, and errno is set appropriately.
 */

void rev_string(char *s)
{

	int i = 0;
	int j = 0;
	char revf;


	while (s[i] != '\0')
	{

		i++;

	}

	i -= 1;



	while (j <= i)
	{
		revf = s[j];
		s[j] = s[i];
		s[i] = revf;
		i--;
		j++;
	}

}
