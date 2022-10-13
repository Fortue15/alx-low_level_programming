#include "3-calc.h"
/**
 * get_op_func - function selects the correct function to perform
 * @s: operater used
 *
 * Return: correct function results or NULL if the operator is wrong
 */
int (get_op-func(char *s))(int, int)
{
	opp_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (s[0] == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
