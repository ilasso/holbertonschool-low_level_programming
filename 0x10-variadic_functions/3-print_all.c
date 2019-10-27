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
	char *s;

	va_start(arguments, format);

	while (format != NULL  && format[i] != '\0')
	{
		switch (*(format + i))
		{
			case 'c':
				printf("%c", va_arg(arguments, int));
				i++;
				break;
			case 'i':
				printf("%d", va_arg(arguments, int));
				i++;
				break;
			case 'f':
				printf("%f", va_arg(arguments, double));
				i++;
				break;
			case 's':
				i++;
				s = va_arg(arguments, char *);
				if (s == NULL)
				{
					s = "(nil)";
				}
				printf("%s", s);
				break;
			default:
				i++;
				continue;
		}
		if (*(format + i) != '\0')
			printf(", ");
	}
	printf("\n");
	va_end(arguments);
}
