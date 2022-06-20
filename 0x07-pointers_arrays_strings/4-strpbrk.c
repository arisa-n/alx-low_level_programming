#include"main.h"
/**
 * _strpbrk - locate a character in a string
 * @s: The string to search
 * @accept: The characters to search for
 * Return: pointer to the first occurrence of any character in @accept in @s
 * or NULL if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
return (&s[i]);
}
}
return (NULL);
}
