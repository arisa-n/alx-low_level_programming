#include <stdio.h>
/**
 * main - Prints the sum of even-valued Fibonacci sequence
 * terms not exceeding 4000000.
 * Return: Always 0.
 */
int main(void)
{
int i, sum = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum += i;
}
printf("%d\n", sum);
return (0);
}
