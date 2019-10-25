#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: separator
 * @n: number of arguments
 * Return: void
 * On error, return 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;
	char *s;

	if (separator == NULL)
		return;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(arguments, char *);

		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");

		if (i != (n - 1))
			printf("%s ", separator);
	}
	va_end(arguments);

	printf("\n");

}
