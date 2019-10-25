#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
 * print_all - function that prints anything.
 * @format: format to print arguments
 * Return: void
 * On error, return 0
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list arguments;

	if (format == NULL)
	{
		printf("(nil)\n");
		return;
	}
	va_start(arguments, format);
	while (format[i] != '\0')
	{
		switch (*(format + i))
		{
			case 'c':
				printf("%c", va_arg(arguments, int));
				i++;
				break;
			case 'i':
				printf("%i", va_arg(arguments, int));
				i++;
				break;
			case 'f':
				printf("%f", va_arg(arguments, double));
				i++;
				break;
			case 's':
				i++;
				printf("%s", va_arg(arguments, char *));
				break;
			default:
				i++;
				continue;
		}
		if (*(format + i) != '\0')
			printf(", ");
	}
	va_end(arguments);
	printf("\n");
}
