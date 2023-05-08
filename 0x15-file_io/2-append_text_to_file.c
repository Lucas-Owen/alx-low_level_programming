#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Appends text to a file
 * @filename: Name of the file
 * @text_content: String to write to fiel
 * Return: (1) on success (-1) on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int res = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
		res = write(fd, text_content, strlen(text_content));
	close(fd);
	return (res < 0 ? (-1) : (1));
}
