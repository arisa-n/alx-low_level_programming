#include"main.h"
#include <stdio.h>
/**
 * puts_half - function that prints half of a string
 * @str: pointer to the string
 * Return: nothing
 */
void puts_half(char *str)
{
int a, b;
while (str[a] != '\0')
a++;
if (a % 2 == 0)
b = a / 2;
else
b = (a + 1) / 2;
while (b < a)
{
_putchar(str[b]);
b++;
}
_putchar('\n');
}
