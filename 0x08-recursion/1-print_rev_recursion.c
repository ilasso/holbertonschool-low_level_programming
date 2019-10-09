#include "holberton.h"
#include <stdio.h>
#include <strings.h>

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s :   input string
 * Return: void
 * On error, -1 is returned, and errno is set appropriately.
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
return;
}
