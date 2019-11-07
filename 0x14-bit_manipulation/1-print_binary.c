#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary-function that prints the binary representation of a number.
 *		 a linked listint_t list.
 * @n:  decimal to print binary notation
 * Return: len of a list
 * On error, return NULL
 */
void print_binary(unsigned long int n)
{
	unsigned long int a;
		/*a = n & 128;
		printf("a=%lu\n", a);
		a = n & 64;
		printf("a=%lu\n", a);
		a = n & 32;
		printf("a=%lu\n", a);
		a = n & 16;
		printf("a=%lu\n", a);*/
		a = n >> 7;	
		printf("a=%lu\n", a);
		printf("a=%lu\n", n);
}
