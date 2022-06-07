#include<stdio.h>
#include"main.h"
/**
 * main - prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return: 0
 */
void print_alphabet_x10(void)
{
char c = 'a';
int i;
for (i = 0; i < 10; i++)
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
return (0);
}
