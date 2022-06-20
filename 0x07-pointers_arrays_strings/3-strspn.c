#include"main.h"
/**
 * _strspn - find the length of a prefix substring
 * @s: The string to search
 * @accept: The characters to search for
 * Return: The length of the prefix substring
 * or 0 if no match is found
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, k;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
break;
}
if (accept[j] == '\0')
break;
}
return (i);
}
