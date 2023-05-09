#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <elf.h>

/**
 * is_elf - Verifies if a buffer is an elf file by checking the
 * first five bytes
 * @buffer: Information containing the first four bytes of a file
 * Return: (1) true, (0) false
 */
int is_elf(char *buffer)
{
	const char elf[] = {0x7f, 0x45, 0x4c, 0x46, 0x0};

	return (strncmp(buffer, elf, 4) == 0 ? 1 : 0);
}

/**
 * print_magic_number - prints the first 16 bytes of a buffer
 * to an elf file
 * @buffer: The buffer containing the elf file info
 * Return: void
 */
void print_magic_number(char *buffer)
{
	int i = 0;

	printf("ELF Header:\n");
	printf("  Magic:%3c", ' ');
	for (i = 0; i < 16; i++)
	{
		printf("%02hx", buffer[i]);
		if (i == 15)
			putchar('\n');
		else
			putchar(' ');
	}
}

/**
 * print_class - Prints header class info of an elf file given class number
 * @is_64_bit: 1 for 64 bit, 0 for 32 bit
 * Return: void
 */
void print_class(char *buffer)
{
	printf("  Class:%29c", ' ');
	switch (buffer[4])
	{
		case ELFCLASSNONE:
			printf("invalid\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			break;
	}
}

/**
 * print_data - Prints header data info of an elf file given its buffer
 * @buffer: The buffer
 * Return: void
 */
void print_data(char *buffer)
{
	printf("  Data:%30c", ' ');
	switch (buffer[5])
	{
			case ELFDATANONE:
				printf("Unknown data format\n");
				break;
			case ELFDATA2LSB:
				printf("2's complement, little-endian\n");
				break;
			case ELFDATA2MSB:
				printf("2's complement, big-endian\n");
				break;
			default:
				break;
	}
}

/**
 * print_version - Prints header version info of an elf file given its buffer
 * @buffer: The buffer
 * Return: void
 */
void print_version(char *buffer)
{
	printf("  Version:%27c%d ", ' ', buffer[6]);
	switch (buffer[6])
	{
		case EV_NONE:
			printf("(invalid)\n");
			break;
		case EV_CURRENT:
			printf("(current)\n");
			break;
		default:
			break;
	}
}

/**
 * print_OS_ABI - Prints header OS/ABI info of an elf file given its buffer
 * @buffer: The buffer
 * Return: void
 */
void print_OS_ABI(char *buffer)
{
	printf("  OS/ABI:%28c", ' ');
	switch ((int) buffer[7])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("TRU64 UNIX\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM architecture\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Stand-alone (embedded)\n");
			break;
		default:
			break;
	}
}

/**
 * print_ABI_version - Prints header ABI_version info of an elf file given its
 * buffer
 * @buffer: The buffer
 * Return: void
 */
void print_ABI_version(char *buffer)
{
	printf("  ABI Version:%23c%hd\n", ' ', buffer[8]);
}

/**
 * print_type - Prints header type info of an elf file given its buffer
 * @buffer: The buffer
 * Return: void
 */
void print_type(char *buffer)
{
	printf("  Type:%30c", ' ');
	switch (buffer[0x10])
	{
		case ET_NONE:
			printf("NONE (Unknown)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("Reserved inclusive range\n");
			break;
	}
}

/**
 * print_entry_point_address - Prints header entry_point_address info
 * of an elf file given its buffer
 * @buffer: The buffer
 * Return: void
 */
void print_entry_point_address(char *buffer)
{
	printf("  Entry point address:%15c%p\n", ' ', *(void **) (buffer + 0x18));
}

/**
 * main - A program to read the following headers from an elf file
 *	with the output format same as readelf -h
 * Magic
 * Class
 * Data
 * Version
 * OS/ABI
 * ABI Version
 * Type
 * Entry point address
 *
 * @argc: Length of argv
 * @argv: Command line arguments used
 * Return: (0) for success, exits with status (98) otherwise
 */
int main(int argc, char **argv)
{
	int fd, res, is_64_bit;
	char buffer[65];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_file\n", argv[0]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Unable to open file %s\n", argv[1]);
		exit(98);
	}

	res = read(fd, buffer, 5);
	if (res < 0)
	{
		dprintf(STDERR_FILENO, "Error: Unable to read file\n");
		exit(98);
	}
	if (!is_elf(buffer))
	{
		dprintf(STDERR_FILENO, "Error: Not an elf file\n");
		exit(98);
	}
	lseek(fd, 0, SEEK_SET);
	is_64_bit = (buffer[4] == 2 ? 1 : 0);
	res = (is_64_bit ? read(fd, buffer, 64) : read(fd, buffer, 52));
	print_magic_number(buffer);
	print_class(buffer);
	print_data(buffer);
	print_version(buffer);
	print_OS_ABI(buffer);
	print_ABI_version(buffer);
	print_type(buffer);
	print_entry_point_address(buffer);
	return (0);
}
