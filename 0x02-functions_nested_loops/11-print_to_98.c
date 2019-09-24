#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98-  return abs value to a number
 * @n: argument input to evaluate
 * Return: last digit
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
int i;

	if (n == 98)
	{
		printf("%d\n", n);
	}

	if (n < 98)
	{

		for (i = n; i <= 98; i++)
		{
		printf("%d", i);
			if (i < 98)
			{
				printf(",");
				printf(" ");
			}
		}
			 printf("\n");
	}

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i > 98)
			{
				printf(",");
				printf(" ");
			}
		}
			 printf("\n");
	}

}
