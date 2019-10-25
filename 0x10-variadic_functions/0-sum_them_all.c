#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of arguments
 * Return: summa
 * On error, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;
	int suma = 0;

	if (n == 0)
		return (0);

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		suma += va_arg(arguments, int);
	}
	va_end(arguments);

return (suma);
}
