#include "main.h"

/**
 * cap_string - capitalizes all word of string
 * @str: string to be capitalize
 * Return: a pointer to the changed string
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;
		if (str[index - l] == ' ' ||
		    str[index - l] == '\t' ||
		    str[index - l] == '\n''||
		    str[index - l] == ',' ||
		    str[index - l] == ' ; ' ||
		    str[index - l] == ' . ' ||
		    str[index - l] == '!' ||
		    str[index - l] == '?' ||
		    str[index - l] == '"' ||
		    str[index - l] == '(' ||
		    str[index - l] == ')' ||
		    str[index - l] == '{' ||
		    str[index - l] == '}' ||
		    index == 0)
			str[index] -=32;

		index++;
	}
	return (str);
}
