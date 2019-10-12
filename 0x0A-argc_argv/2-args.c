#include <stdio.h>
#define UNUSED(argv)(void)(argv)
/**
 * main - print arguments 
 * @argc: quantity of parameters
 * @argv: array char contain straing parameters including commando
 *
 * Return: On success 1. return 0 if is upper otherwise return 0
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
