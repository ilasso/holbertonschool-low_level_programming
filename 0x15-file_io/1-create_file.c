#include "holberton.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * create_file - function that creates a file.
 * @filename: name of the file to process.
 * @text_content: text inside de file.
 * Return: 1 success and -1 fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
	{
		close(fd);
		return (-1);
	}
	if (text_content != NULL)
	{
		w = write(fd, text_content, strlen(text_content) * sizeof(char));
		if (w < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
