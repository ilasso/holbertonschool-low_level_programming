#include <stdio.h>
#define UNUSED(argc)(void)(argc)
/**
 * main - print name command argv[0]
 * @argc: quantity of parameters
 * @argv: array char contain straing parameters including commando
 *
 * Return: On success 1. return 0 if is upper otherwise return 0
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])

{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
