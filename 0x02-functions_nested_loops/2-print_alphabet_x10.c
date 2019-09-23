#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{

	int n = 0;

	for (n = 0; n < 10 ; n++)
	{
		print_alphabet();
	} 
	_putchar(10);
}
