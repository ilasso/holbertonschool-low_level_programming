#include "holberton.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n;
	char buf[13];

	fd = open(filename, O_RDONLY);

	if (fd < 0)
	{
		printf("Error %d\n",fd);
		return(0);
	}

	n = read(fd, buf,14);

	printf("Error %s\n",buf);

	write(STDOUT_FILENO, buf, letters);

	return(n);

	close(fd);

}
