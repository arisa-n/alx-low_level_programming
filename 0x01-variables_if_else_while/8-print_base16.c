#include<stdio.h>
/**
 * main - Determine if a random number is positive, negative or zero.
(*
 * Return: 0 on success
 */
int main(void)
{
int i ='0' ;
while(i <= '9')
{
putchar(i);
i++;
}
i='a';
while(i<='f')
{
putchar(i);
i ++;
}
putchar('\n');
return (0);
}
