#include <stdio.h>
#define UNUSED(argv)(void)(argv)
/**
 * main - print quantity of arguments
 * @argc: quantity of parameters
 * @argv: array char contain straing parameters including commando
 *
 * Return: On success 1. return 0 if is upper otherwise return 0
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])

{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
