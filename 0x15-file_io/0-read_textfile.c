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
	size_t written, extracted;
	char *buffer = malloc(sizeof(char *) * (letters + 1));

	if (filename == NULL || buffer == NULL)
		return (0);
	if (open(filename, O_RDONLY) > 0)
	{
		extracted = read(fd, buffer, letters);
		if (extracted < 0)
			return (0);
		written = write(STDOUT_FILENO, buffer, letters);

		return (written < letters ? (0) : (written));
	}
	return (0);
}
