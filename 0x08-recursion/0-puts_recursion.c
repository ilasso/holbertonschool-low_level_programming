#include "holberton.h"
#include <stdio.h>
#include <strings.h>

/**
 * _puts_recursion  - function that prints  a string whitout loops
 * @s :   input string
 * Return: void
 * On error, -1 is returned, and errno is set appropriately.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
