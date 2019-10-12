#include <stdio.h>
#include <stdlib.h>
#define UNUSED(argv)(void)(argv)
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
	int suma = 0;
	int i;

	if (argc < 2)
	{
		printf("0\n");
		return (0);

	}
	for (i = 1; i < argc; i++)
	{
		if (!(atoi(argv[i]) && argv[i] != 0))
		{
			printf("Error\n");
			return (1);

		}
		suma += atoi(argv[i]);
	}
	printf("%d\n", suma);

	return (0);
}
