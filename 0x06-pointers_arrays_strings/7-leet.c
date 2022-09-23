#include "main.h"

/**
 * leet - encodes a string 1337.
 * @str: string to be incoded
 * Return: a pointer to the encoded string
 */

char *leet(char *str)
{
	int indx 1 = 0, indx2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[indx1])
	{
		for (indx2 = 0; index2 <= 7; indx2++)
		{
			if (str[indx1] == leet[indx2] ||
			   (str[index1] - 32 == leet[indx2])
			 str[indx1] = index2 + '0';
		}

		indx1++;
	}

	return (str);
}
