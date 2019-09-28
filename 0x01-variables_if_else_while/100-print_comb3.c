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

	for (n = 0 ; n < 10; n++)
	{
		for (m = 0 + n; m < 10; m++)
		{

			/*if (n != m && n != 8 && n !=9) */
			if (n != m) 
			{
				putchar(n + '0');
				putchar(m + '0');
				if ((n + m) < 17)
				{
					putchar(',');
					putchar(' ');
				}

			}


		}


	}

	putchar('\n');

	return (0);
}
