#include<stdio.h>
#include"main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char c = 'a';
int i;
for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
}
