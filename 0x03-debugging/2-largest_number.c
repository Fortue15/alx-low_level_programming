#include "main.h"

/**
 *largest_number - returns the largest of three numbers
 *@a: first interger
 *@b: second interger
 *@c: third interger
 *Return: return largest numbers
 */

int largest_number(int a, int b, int c)
{
int largest;

	if (a > b && a > c)
{
	largest = a;
}
	else if (a > b && c > a)
{
	largest = c;
}
	else if (b > c)
{
	largest = b;
}
	else
{
	largest = c;
}
	return (largest);
}
