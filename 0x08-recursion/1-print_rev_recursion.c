#include "holberton.h"
#include <stdio.h>
#include <strings.h>

/**
 * _print-rev_recursion - function that prints a string in reverse.
 * @s :   input string
 * Return: void
 * On error, -1 is returned, and errno is set appropriately.
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	 else 
	{
		
		s--;
		_putchar(*s);
		_print_rev_recursion(s);

		if (*s == '\n')
		{
			_putchar('\n');
			return;
		}

	}
}
