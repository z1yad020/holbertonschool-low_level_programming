#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * exitstatus - exit checker
 * @fd_ffrom: fd file from
 * @fd_fto: fd file to
 * @readtext: read count
 * @writetext: wrote count
 * @argv: argument vector
 * Return: void
 */
void exitstatus(char **argv,
		int fd_ffrom, int fd_fto, int readtext, int writetext)
{
	if (fd_ffrom < 0 || readtext < 0)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (fd_fto < 0 || writetext < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	if (close(fd_ffrom))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_ffrom);

	if (close(fd_fto))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_fto);

	exit(100);
}

/**
 * main - copies the content of a file to another file (entry point)
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char **argv)
{
	int fd_ffrom, fd_fto, readtext = 1024, writetext;
	char buff[1024];

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	fd_ffrom = open(argv[1], O_RDONLY);
	fd_fto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	while (readtext == 1024)
	{
		readtext = read(fd_ffrom, buff, 1024);
		writetext = write(fd_fto, buff, readtext);
		exitstatus(argv, fd_ffrom, fd_fto, readtext, writetext);
	}

	return (0);
}
