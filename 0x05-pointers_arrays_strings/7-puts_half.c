#include"main.h"
/**
 * puts_half - function that prints half of a string
 * @str: pointer to the string
 * Return: nothing
 */
void puts_half(char *str)
{
int i, j;
i = 0;
j = 0;
while (str[i] != '\0')
{
i++;
}
i = i / 2;
while (j < i)
{
printf("%c", str[j]);
j++;
}
printf("\n");
}
