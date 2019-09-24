#include "holberton.h"
/**
 * print_last_digit -  return abs value to a number
 * @n: argument input to evaluate
 * Return: last digit
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
int lastdigit;

if (n < 0)
{
n = n * -1;
}

lastdigit = n % 10;


/*_putchar(lastdigit);*/

return (lastdigit);

}
