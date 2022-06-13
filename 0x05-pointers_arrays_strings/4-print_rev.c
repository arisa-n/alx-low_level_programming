#include"main.h"
/**
 * print_rev - function that prints a string in reverse
 * @str: pointer to the string
 * Return: nothing
 */
void print_rev(char *str)
{
int len = 0;
while (*str != '\0')
len++;
while (len)
printf(str[--len]);
printf('\n');
}
