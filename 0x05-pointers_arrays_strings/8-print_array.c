#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of arrays
 * @a: arrays
 * @n: number of elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d,", a[inc]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	putchar("\n");
}
