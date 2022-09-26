#include "main.h"

/**
 * _memset - fills  a memory block with a constant byte
 * @s: adress to memory block
 * @b: char to be used
 * @n: number of byte to be used
 *
 * Return: pointer to the memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
