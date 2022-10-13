#include "3-calc.h"
/**
 * op_add - return the number sum of 2 numbers
 * @a: integer
 * @b: integer
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns differents of 2 numbers
 * @a: integer
 * @b: integer
 *
 * Return: differents
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul  - returns product of two numbers
 * @a: integer
 * @b: integer
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the qoutient of 2 numbers
 * @a: integer
 * @b: integer
 *
 * Return: qoutient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the reminder of division
 * @a: integer
 * @b: integer
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
