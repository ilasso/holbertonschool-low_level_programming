#include "holberton.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - function that reads a text file and prints
 *			it to the POSIX standard output.
 * @filename: name of the file to process.
 * @letters: number of chars to read
 * Return: number of chars to print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n;
	ssize_t w;
	char *buf;

	if (filename == NULL)
		return (0);
	if (letters <= 0)
		return (0);
	buf  = malloc(letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		close(fd);
		free(buf);
		return (0);
	}

	n = read(fd, buf, letters);
	if (n <  0)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	w = write(1, buf, n);
	if (w < 0)
	{
		close(fd);
		free(buf);
		return (0);
	}
	free(buf);
	return (w);
}
