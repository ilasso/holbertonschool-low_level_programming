#include "holberton.h"

/**
 * more_numbers -  print 10 times numbers 0 to 14
 *
 * Return:  void
 * On error, -1 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar (i <= 9 ? (i + '0') : ((i / 10)  + '0'));
			if (i > 9)
			{
				_putchar ((i % 10) + '0');
			}
		}
		_putchar ('\n');
	}

}
