#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - Determine if a random number is positive, negative or zero.
(*
 * Return: 0 on success
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 10 > 5)
{
printf("%d and is greater than 5\n", n);
}
else if (n % 10 != 0 && n % 10 < 6)
{
printf("%d is less than 6 and not 0\n", n);
}
else
{
printf("%d and is 0\n", n);
}
return (0);
}
