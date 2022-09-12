#include <stdio.h>
/**
* main - Prints the alphabet in lowercase.
*
*Description: "program that prints the alphabet in lowercase"
*Return: Always 0 (success)
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
putchar('\n');
return(0);
}
