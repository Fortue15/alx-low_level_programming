#include "main.h"

/**
 * puts_half - function that prints half of string,followed by new line
 * @str: This is the input string
 * Return: half the input
 */

void puts_half(char *str)
{
	int len = 0

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);

	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}

	putchar('\0');
}
