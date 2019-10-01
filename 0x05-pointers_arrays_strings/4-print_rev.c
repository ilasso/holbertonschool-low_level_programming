#include "holberton.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s   : pointer to char. string to reverse
 * Return:  void
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_rev(char *s)
{
	int i = 0;

	i = _strlen(s);

	while (i > 0)
	{
		i--;
		_putchar(*(s + i));


	}
		_putchar('\n');

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
