#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - print add numbers give as parameter
 * @argc: quantity of parameters
 * @argv: array char contain straing parameters including commando
 *
 * Return: On success 1. return 0 if is upper otherwise return 0
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	char *c;

	int (*funcion)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98); /*  arguments are wrong */

	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = argv[2];

	if (b == 0 && (*c == '/' || *c == '%'))
	{
		printf("Error\n");
		exit(100); /* division by 0*/
	}


	funcion = get_op_func(argv[2]);

	if (funcion == NULL)
	{
		printf("Error\n");
		exit(99); /*  operator is not +, - , *, /, %*/
	}


	printf("%d\n", funcion(a, b));

	return (0);
}
