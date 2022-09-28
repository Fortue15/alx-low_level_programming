#include "main.h"

/**
 * _strlen_recursion - length of string
 * @s: pointer block of memory to fill
 * Return: strlen_recursion
 */
int _strlen_recursion(char *s)
{

/*base condition*/
if (*s == '\0')
return (0);

else
return (1 + _strlen_recursion(s + 1)); /*sum 1*/
}
