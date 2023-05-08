#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * open_files - open files and exits on failure
 * @argv: argv from main
 * @file_to: File copying to
 * @file_from: File copying from
 * Return: void
 */
void open_files(char **argv, int *file_to, int *file_from)
{
	int fd;

	*file_from = open(argv[1], O_RDONLY);
	if (*file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	*file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT,
				S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (*file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		fd = close(*file_from);
		if (fd < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *file_from);
			exit(100);
		}
		exit(99);
	}
}
/**
 * main - Copies contents of one file to another
 * @argc: Length of argv
 * @argv: Arguments array
 * Return: (0) or exits with status (98) or (97)
 */
int main(int argc, char **argv)
{
	int file_to, file_from, fd;
	int result;
	char buffer[1025];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	open_files(argv, &file_to, &file_from);
	result = read(file_from, buffer, 1024);
	if (result < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	do {
		result = write(file_to, buffer, result);
		if (result < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(100);
		}
		result = read(file_from, buffer, 1024);
	} while (result != 0);
	fd = close(file_from);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	fd = close(file_to);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
