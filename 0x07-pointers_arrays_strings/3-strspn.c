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
unsigned int j = 0;
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
j++;
break;
}
else if (accept[i + 1] == '\0')
return (j);
}
s++;
}
return (j);
}
