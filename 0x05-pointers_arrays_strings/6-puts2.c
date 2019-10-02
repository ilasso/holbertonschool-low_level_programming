#include "holberton.h"

/**
 * puts2     -  prints every other character of a string, starting with the first character, 
 *		followed by a new line
 * @str   : pointer to char. string to reverse
 * Return:  void
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts2(char *str)
{

	int i = 0;


	while ( *(str +i) != '\0')
	{

		_putchar(*(str + i));

	i += 2;


	}
	_putchar('\n');

}
