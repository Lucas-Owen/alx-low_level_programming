#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define f1(num) ((num ^ 0x3b) & 0x3f)

/**
 * f3 - does something
 * @user: Arg
 * @length: Arg
 * Return: int
 */
int f3(char *user, size_t length)
{
	size_t i;
	int result = 1;

	for (i = 0; i < length; i++)
	{
		result = user[i] * result;
	}
	result ^= 0x55;
	result &= 0x3f;
	return (result);
}


/**
 * f4 - does something
 * @user: Arg
 * @length: Arg
 * Return: int
 */
int f4(char *user, size_t length)
{
	size_t i;
	int result = user[0];

	for (i = 0; i < length; i++)
	{
		if (user[i] > result)
			result = user[i];
	}
	result ^= 0xe;
	srand(result);
	result = rand() & 0x3f;
	return (result);
}


/**
 * f5 - does something
 * @user: Arg
 * @length: Arg
 * Return: int
 */
int f5(char *user, size_t length)
{
	size_t i;
	int result = 0;

	for (i = 0; i < length; i++)
	{
		result += user[i] * user[i];
	}
	result ^= 0xef;
	result &= 0x3f;
	return (result);
}


/**
 * f6 - does something
 * @num: Arg
 * Return: int
 */
int f6(char num)
{
	int i;
	int result = 0;

	for (i = 0; i < num; i++)
	{
		result = rand();
	}
	result ^= 0xe5;
	result &= 0x3f;
	return (result);
}

/**
 * main - This application has been reverse-engineered from crackme5
 * @argc: Arg
 * @argv: Arg
 * Return: int
 */
int main(int argc, char **argv)
{
	char password[6];
	char *key =
	"A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	size_t len;
	size_t i;
	int idx;

	if (argc != 2)
		return (1);
	len = strlen(argv[1]);
	memset(password, 0, sizeof(char) * 6);
	idx = f1(len);
	password[0] = key[idx];
	idx = 0;
	for (i = 0; i < len; i++)
		idx += argv[1][i];
	idx = (idx ^ 0x4f) & 0x3f;
	password[1] = key[idx];
	idx = f3(argv[1], len);
	password[2] = key[idx];
	idx = f4(argv[1], len);
	password[3] = key[idx];
	idx = f5(argv[1], len);
	password[4] = key[idx];
	idx = f6(argv[1][0]);
	password[5] = key[idx];
	printf("%s", password);
	return (0);
}
