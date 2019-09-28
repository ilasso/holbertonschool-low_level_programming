#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int n = 0;
int m = 0;
int l = 0;

	for (n = 0 ; n < 10; n++)
	{
		for (m = 0 + n; m < 10; m++)
		{
		if (n < m)
		{
			for (l = 0 + n; l < 10; l++)
			{
				if (m < l)
				{

					putchar(n + '0');
					putchar(m + '0');
					putchar(l + '0');
					if ((n + m + l) < 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			} /* l*/
		}
		} /* m */

	} /* n */

	putchar('\n');

	return (0);
}
