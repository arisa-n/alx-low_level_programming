#include"main.h"
/**
 * rev_string - function that reverses a string
 * @s: pointer to the string
 * Return: nothing
 */
void rev_string(char *s)
{
int i, j;
char temp;
i = 0;
j = _strlen(s) - 1;
while (i < j)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
i++;
j--;
}
}
