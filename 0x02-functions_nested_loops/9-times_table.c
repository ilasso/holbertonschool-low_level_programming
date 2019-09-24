#include "holberton.h"
/**
 * times_table-  return tables 0 to 9
 * @void: doesn't have argument input to evaluate
 * Return: prints multiply table 0 to 9
 * On error, -1 all seconds all the dayis returned, and errno is set
 * appropriately.
 */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int result;
	int onedigit;
	int twodigit;

	for (i = 0; i <= 9 ; i++)
	{
		for (j = 0; j <= 9 ; j++)
		{
			result = i * j;
			onedigit = result / 10;
			twodigit = result % 10;

			if (j > 0 && result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (result >= 10)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (result >= 10)
			{
				_putchar(onedigit + '0');
				_putchar(twodigit + '0');
			}
			else
			{
				_putchar(result + '0');
			}

		}
		_putchar('\n');

	}
}
