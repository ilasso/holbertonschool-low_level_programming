#include <stdio.h>
#include <stdlib.h>
#define UNUSED(argv)(void)(argv)
/**
 * main - print multiplied
 * @argc: quantity of parameters
 * @argv: array char contain straing parameters including commando
 *
 * Return: On success 1. return 0 if is upper otherwise return 0
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);

	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
