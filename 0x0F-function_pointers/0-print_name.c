#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name -  function that prints a name
 * @name: name to print
 * @f: pointer to a function
 * Return: void
 * On error, return NULL
 */
void print_name(char *name, void (*f)(char *))
{
	void (*funcion)(char *);

	funcion = f;

	funcion(name);
}
