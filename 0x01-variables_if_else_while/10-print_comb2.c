#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int n = 97;
int m = 97;

	for (n = 48; n < 58; n++)
	{
		for (m = 48; m < 58; m++)
		{
			putchar(n);
			putchar(m);

			if (n < 57 || m < 57)
			{
				putchar(44);
				putchar(32);
			}

		}


	}

	putchar(10);

	return (0);
}
