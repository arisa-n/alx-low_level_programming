#include<stdio.h>
/**
 * main - Determine if a random number is positive, negative or zero.
(*
 * Return: 0 on success
 */
int main(void)
{
char c = 'a';
char d = 'A';
while (c <= 'z')
{
putchar(c);
}
c++;
while (d <= 'Z')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
