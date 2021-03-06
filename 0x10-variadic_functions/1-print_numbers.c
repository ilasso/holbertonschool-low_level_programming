#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: separator
 * @n: number of arguments
 * Return: summa
 * On error, return 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arguments, unsigned int));

		if (separator != NULL)
		{
			if (i != (n - 1))
				printf("%s", separator);
		}
	}
	va_end(arguments);

	printf("\n");

}
