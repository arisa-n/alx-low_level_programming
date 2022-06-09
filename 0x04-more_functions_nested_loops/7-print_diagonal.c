#include"main.h"
/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: Number of times to print the \ character.
 * Return: void.
 */
void print_diagonal(int n)
{
int i;
int j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
