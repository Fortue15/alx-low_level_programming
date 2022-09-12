#include <stdio.h>
/**
 * main - print if the alphabet in lowercase, and then in uppercase
 *
 * Description: using the main fuction
 * this program prints "programming is lowercase, then in uppercase"
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
