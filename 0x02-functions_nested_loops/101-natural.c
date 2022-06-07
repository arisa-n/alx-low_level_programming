#include <stdio.h>
/**
* main - Prints natural numbers below 1024 that are
* multiplies of 3 or 5
* Return: Always 0.
*/
int main(void)
{
int i;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
printf("%d, ", i);
}
}
printf("\n");
return (0);
}
