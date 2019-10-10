#include "holberton.h"
#include <stdio.h>
#include <strings.h>


int _strlen(char *s);
int palindrome(char *s, int inic, int len);

/**
 * is_palindrome- function that returns 1 if the input string is a palindrome
 * @s :   input string
 * Return: int
 * On error, -1 is returned, and errno is set appropriately.
 */

int is_palindrome(char *s)
{
	int len;

	/* string null and string 1 are palindrome */

	if (*s == '\0')
	{
		return (1);
	}

	len = _strlen(s) - 1;

	if (len <= 1)
	{
		return (1);
	}

	return (palindrome(s, 0, len));

	return (0);

}

/**
 * _strlen - function that returns the length of a string.
 * @s :   input string
 * Return: length string int
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	/**
	 * va recorriendo pos x pos hasta '\0'
	 * va retornando el valor de i q va contando
	 */
	i = 1 + _strlen(s + 1);

	return (i);

}


/**
 * palindrome- Local function that returns 1 the input string is a palindrome
 * @s :   input string
 * @inic :   initial position string
 * @len :   len input string
 * Return: int
 * On error, -1 is returned, and errno is set appropriately.
 */

int palindrome(char *s, int inic, int len)
{
	/*printf("s+inic=%c, s+len=%c\n",*(s+inic),*(s+len));*/

	if (*(s + inic) == '\0')
	{
		return (1);
	}


	if (*(s + inic) == *(s + len))
	{
		/* like a loop, while inic and final(len) are equals */
		return (palindrome(s, inic + 1, len - 1));
	}
	else
	{
	/* if inic char and final char are diferents not its palindrome */
		return (0);

	}
}

