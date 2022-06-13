#include"main.h"
/**
 * _puts - function that prints a string
 * @str: pointer to the string
 * Return: nothing
 */
void _puts(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
_putchar(*str);
i++;
}
_putchar('\n');
}
