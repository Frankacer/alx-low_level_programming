#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates random integer and evaluates its aize
 * Return: return 0 if block executes successfully
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int l = abs(n) % 10;
if (l > 5)
{
printf("The last digit of %d is %d and is greater than 5\n", n, l);
}
if (l == 0)
{
printf("The last digit of %d is %d and is 0\n", n, l);
}
if (l < 6 && l != 0)
{
printf("The last digit of %d is %d and is less than 6 and not 0\n", n, l);
}
return (0);
}
