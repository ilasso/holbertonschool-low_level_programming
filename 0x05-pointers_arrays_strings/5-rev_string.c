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
	char rev;
	int j=0;
	

        i = _strlen(s);

        while (i  > 0)
        {
                i--;
		rev = *( s + i);

		*(s + i) = *(s + j);

		*(s + j) = rev;

		j++;

		printf("(s+i)=%c, (s+j)=%c, rev=%c \n",*(s + i), *(s+j), rev);
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
