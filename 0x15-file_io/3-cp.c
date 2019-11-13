#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
/**
 * main - Make a copy of a file
 * @argc: Q arguments
 * @argv: arguments origin, destination files
 *
 * Return: 0 success, 97 bad command, 98 cant to read origin,
 *		99 cant create destination
 *         100 cant close files
 */

int main(int argc, char **argv)
{
	ssize_t origen;
	ssize_t destino;
	ssize_t bulk;
	char rd[1024];

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	origen = open(*(argv + 1), O_RDONLY);
	if (origen < 0)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	destino = open(*(argv + 2), O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (destino < 0)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", *(argv + 2));
		exit(99);
	}
	bulk = 1;
	while (bulk != 0)
	{
		bulk = read(origen, rd, 1024);
		write(destino, rd, bulk);
	}
	close(origen);
	close(destino);
	return (0);









}
