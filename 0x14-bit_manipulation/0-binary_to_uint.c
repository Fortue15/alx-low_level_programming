#include "main.h"

/**
 * binary_to_unit - converts a binary number to an
 * unsigned int
 * @b:the string containg the binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (len = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > 'i')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}
	return (doc_val);
}
