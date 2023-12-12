#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content:  NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, lentext;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd < 0 || !filename)
		goto finish;

	if (text_content)
		lentext = write(fd, text_content, strlen(text_content) + 1);
	else
		lentext = write(fd, text_content, 0);

	if (lentext < 0)
		goto finish;

	close(fd);
	return (1);

finish:
	close(fd);
	return (-1);
}
