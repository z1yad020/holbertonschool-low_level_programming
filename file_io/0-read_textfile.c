#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name
 * @letters:  number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buff[1024];
	int fd_file;
	size_t lenbuff;

	fd_file = open(filename, O_RDONLY);

	if (fd_file < 0 || !filename)
	{
		close(fd_file);
		return (0);
	}

	lenbuff = read(fd_file, buff, letters);

	if (lenbuff < 1)
	{
		close(fd_file);
		return (0);
	}

	lenbuff = write(STDOUT_FILENO, buff, lenbuff);
	if (lenbuff < 1)
	{
		close(fd_file);
		return (0);
	}
	return (lenbuff);
}
