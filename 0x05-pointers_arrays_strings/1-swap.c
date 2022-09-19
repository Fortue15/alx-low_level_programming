#include "main.h"

/**
 * swap_int - swaps two integers value
 * @a: first integer
 * @b: second interger
 * Return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
