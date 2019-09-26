#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			i == 100 ? printf("FizzBuzz") : printf("FizzBuzz ");
			continue;
		}

		if ((i % 3) == 0)
		{
			i == 100 ? printf("Fizz") : printf("Fizz ");
			continue;
		}

		if ((i % 5) == 0)
		{
			i == 100 ? printf("Buzz") : printf("Buzz ");
			continue;
		}
			i == 100 ? printf("%d", i) : printf("%d ", i);

	}

	printf("\n");
	return (0);
}
