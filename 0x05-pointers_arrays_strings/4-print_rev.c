#include"main.h"
/**
 * print_rev - function that prints a string in reverse
 * @str: pointer to the string
 * Return: nothing
 */
void print_rev(char *str)
{
int len = 0;
while (str[len] != '\0')
len++;
while (len)
_putchar(str[--len]);
_putchar('\n');
}
