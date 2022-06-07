#include<stdio.h>
#include"main.h"
/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: 0
 */
void print_alphabet(void);
int main(void)
{
char c='a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
