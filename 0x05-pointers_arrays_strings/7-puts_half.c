#include <stdio.h>
#include "main.h"

/**
 * puts_half - function that prints half of string,followed by new line
 * @str: This is the input string
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));
	putchar('\0');
}
