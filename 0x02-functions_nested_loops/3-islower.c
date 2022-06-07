#include<stdio.h>
#include"main.h"
/**
 * main - Write a function that checks for lowercase character.
 * Return: 0
 */
int main(void)
{
char c;
if (islower(c))
{
printf("%c is lowercase\n", c);
}
else
{
printf("%c is not lowercase\n", c);
}
return (0);
}