#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, lentext;

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd < 0 || !filename)
		goto finish;

	if (text_content)
		lentext = write(fd, text_content, strlen(text_content));

	if (lentext < 0)
		goto finish;

	close(fd);
	return (1);

finish:
	close(fd);
	return (-1);
}
