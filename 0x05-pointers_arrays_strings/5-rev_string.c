#include"main.h"
/**
 * rev_string - function that reverses a string
 * @s: pointer to the string
 * Return: nothing
 */
void rev_string(char *s)
{
int len = 0, i = 0;
char eu;
while (s[len] != '\0')
len++;
while (i < len--)
{
eu = s[i];
s[i++] = s[len];
s[len] = eu;
}
}
