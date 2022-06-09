#include<stdio.h>
/**
 *  largest prime factor - returns the largest prime factor of a number
 * @n: number to find largest prime factor of
 * Return: largest prime factor of n
 */
int main(void)
{
long prime = 612852475143, l;
while (l < (prime / 2))
{
if ((prime % 2) == 0)
{
prime /= 2;
continue;
}
for (l = 3; l < (prime / 2); l += 2)
{
if ((prime % l) == 0)
prime /= l;
}
}
printf("%ld\n", prime);
return (0);
}
