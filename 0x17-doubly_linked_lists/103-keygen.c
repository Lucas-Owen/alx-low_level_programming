#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int f1(int num)
{
	num ^= 0x3b;
	num &= 0x3f;
	return (num);
}

int f2(char *user, size_t length)
{
	size_t i;
	int result = 0;

	for (i = 0; i < length; i++)
	{
		result += user[i];
	}
	result ^= 0x4f;
	result &= 0x3f;
	return (result);
}
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

int main(int argc, char **argv)
{
	char password[6];
	char *key =
	"A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	size_t len;
	int idx;

	if (argc != 2)
		return (1);
	len = strlen(argv[1]);
	memset(password, 0, sizeof(char) * 6);
	idx = f1(len);
	password[0] = key[idx];
	idx = f2(argv[1], len);
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
