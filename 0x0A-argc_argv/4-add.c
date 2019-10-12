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
	char *s;
	int j;



	if (argc < 2)
	{
		printf("0\n");
		return (0);

	}
	for (i = 1; i < argc; i++)
	{
		s = argv[i];
		for (j = 0; *s != '\0'; j++)
		{
			if (!(*s >= 48 && *s <= 57))
			{
				printf("Error\n");
				exit(1);
			}
			s++;

		}
		suma += atoi(argv[i]);
	}
	printf("%d\n", suma);

	return (0);
}
