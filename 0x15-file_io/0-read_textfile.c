#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * standard output
 * @filename: Name of file
 * @letters: The amount of letters it should read and print
 * Return: The actual number of letters it can read or print or (0)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int written, extracted;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char *) * (letters + 1));
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd > 0)
	{
		extracted = read(fd, buffer, letters);
		if (extracted < 0)
			return (0);
		written = write(STDOUT_FILENO, buffer, extracted);
		close(fd);
		free(buffer);

		return (written < extracted ? (0) : (written));
	}
	return (0);
}
