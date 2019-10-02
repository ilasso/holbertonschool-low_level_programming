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

	i = _strlen(s) - 1;

	while (i  >= 0 && i != j)
	{

		if (j != i)
		{
			revi = *(s + j);
			revf = *(s + i);

			*(s + i) = revi;

			*(s + j) =  revf;
		}

		i--;

		j++;

	}
}

/**
 * _strlen   -  returns the length of a string.
 * @s : pointer to char
 * Return:  int
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{

		i++;

	}

	return (i);


}
