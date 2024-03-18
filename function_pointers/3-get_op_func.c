#include <stdio.h>
#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - get the operator to return the right function
 * @s: operator
 * Return: the function corresponding to s or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
	while (strcmp(s, ops[i].op) != 0 && ops[i].op != NULL)
	{
		i++;
	}
	return (ops[i].f);
}
