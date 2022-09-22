#include "main.h"

/**
 * _strlen - returns the legnth of a string
 * @s: string
 * Return: returns length as interger;
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}

/**
 * cap_string - function that capitalize first character of word
 * @str: string to capitalize
 * Return: returns the capitalized string
 */
char *cap_string(char *)
{
