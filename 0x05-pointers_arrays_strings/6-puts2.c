#include"main.h"
#include <stdio.h>
/**
 * puts2- prints every other character of a string.
 * @str: pointer to the string
 * Return: nothing
 */
void puts2(char *str)
{
int len = 0;
int l = 0;
char *y = str;
int z;

while (*y != '\0')
{
y++;
len++;
}
l = len - 1;
for (z = 0; z <= 1; z++)
{
if (z % 2 == 0)
{
_putchar(str[z]);
}
}
_putchar('\n');
}
