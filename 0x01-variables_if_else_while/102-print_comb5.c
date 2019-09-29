#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int n;
int m;
int cont = 1;

	for (n = 0 ; n < 100; n++)
	{

		for (m = cont; m < 100; m++)
		{
			if (n != m)
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				putchar(' ');
				putchar((m / 10) + '0');
				putchar((m % 10) + '0');
				if (n != 98)
				{
					putchar(',');
					putchar(' ');
				}

			}
		}

		cont =  n + 1;


	}

	putchar('\n');

	return (0);
}
