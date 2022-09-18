#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints the last digit of the random
* number stored in the variable n
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int l;

srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;

if (1 > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, l)
}
else if (1 == 0)
{
printf("Last digit of %d is %d and is 0\n", n, l);
}
else
{
printf("last digit of %d is %d and is less than 6 and not 0\n", n, l);
}
return (0);
}
