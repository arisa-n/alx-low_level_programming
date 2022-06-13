#include"main.h"
/**
 * _puts - function that prints a string
 * @str: pointer to the string
 * Return: nothing
 */
void _puts(char *str)
{
while (*str != '\0')
{
printf(*str);
str++;
}
printf('\n');
}
