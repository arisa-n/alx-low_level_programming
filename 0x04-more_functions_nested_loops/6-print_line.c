#include"main.h"
/**
 * print_line - Draws a straight line using the character _.
 * @n: Number of times to print _
 * Return: void
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
