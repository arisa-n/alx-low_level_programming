#include"main.h"
#include <stdio.h>
/**
 * puts2- prints every other character of a string.
 * @str: pointer to the string
 * Return: nothing
 */
void puts2(char *str)
{
int len = 0, i = 0;
while (str[len] != '\0')
len++;
len -= 1;
for (; i <= len; i += 2)
printf(*str);
printf('\n');
}
