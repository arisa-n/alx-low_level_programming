#include<stdio.h>
#include"main.h"
/**
* print_times_table - Prints the n times table
* @n: number times table (0 < n <= 15)
* Return: no return
*/
void print_times_table(int n)
{
int a, b, c;
if (n > 15 || n < 0)
{
printf("%d is not between 0 and 15\n", n);
return;
}
for (a = 0; a <= n; a++)
{
for (b = 0; b <= n; b++)
{
c = a * b;
if (c > 9)
{
putchar(c / 10 + '0');
}
putchar(c % 10 + '0');
if (b < n)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
}
}
