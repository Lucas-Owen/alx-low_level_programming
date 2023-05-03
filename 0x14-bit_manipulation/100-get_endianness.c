#include "main.h"

/**
 * get_endianness - Checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num = 7;
	char *mem = (char *) &num;

	return (*mem != 0);
}
