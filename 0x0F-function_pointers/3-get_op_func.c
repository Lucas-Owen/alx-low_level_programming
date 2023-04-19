#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform an operation
 * @s: An operation as a char *
 * Return: A pointer to the function that corresponds
 * to the given operator
 */
int (*get_op_func(char *s))(int, int)
{
	opt_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return ops[i].f;
	}
}