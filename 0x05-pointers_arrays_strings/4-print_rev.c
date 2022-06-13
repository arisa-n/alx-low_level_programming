#include"main.h"
/**
 * print_rev - function that prints a string in reverse
 * @str: pointer to the string
 * Return: nothing
 */
void print_rev(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
i++;
}
while (i >= 0)
{
putchar(str[i]);
i--;
}
putchar('\n');
}
