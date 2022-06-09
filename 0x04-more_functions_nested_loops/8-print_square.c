#include"main.h"
/**
 * print_square - Draws a square using the character _.
 * @size: Number of times to print _
 * Return: void
 */
void print_square(int size)
{
int i, j;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
