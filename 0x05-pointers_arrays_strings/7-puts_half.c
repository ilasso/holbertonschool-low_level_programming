#include "holberton.h"

/**
 * puts_half -  prints every other character of a string, starting with
 *		the first character,followed by a new line
 * @str   : pointer to char. string to reverse
 * Return:  void
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts_half(char *str)
{

	int i = 0;
	int inic = 0;

	while (*(str + i) != '\0')
	{

		i++; /*len*/

	}



	if ((i % 2) == 0) /*par*/
	{
		inic = i / 2;

	}
	else
	{
		inic = (i - 1) / 2;

	}

	while (*(str + inic) != '\0')
	{

		_putchar(*(str + inic));

		inic++;

	}

	_putchar('\n');

}
