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
			printf("FizzBuzz ");
			continue;
		}

		if ((i % 3) == 0)
		{
			printf("Fizz ");
			continue;
		}

		if ((i % 5) == 0)
		{
			printf("Buzz ");
			continue;
		}
		if (i == 100) {
			printf("%d", i);
			continue;
		}
			printf("%d ", i);

	}

	printf("\n");
	return (0);
}
