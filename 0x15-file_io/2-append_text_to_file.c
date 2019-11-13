#include "holberton.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file to process.
 * @text_content: text inside de file to append.
 * Return: 1 success and -1 fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR);
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
