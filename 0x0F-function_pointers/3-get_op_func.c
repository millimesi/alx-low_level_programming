#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - return operation
 * @s: op type
 *
 * Description - return operation fn pointer
 * Return: pointer function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
