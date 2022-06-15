#include"main.h"
/**
 * leet - encodes a string into 1337
 * @str: string to encode
 * Return: pointer to str
 */
char *leet(char *str)
{
int i = 0;
while (str[i])
{
if (str[i] == 'a' || str[i] == 'A')
str[i] = '4';
else if (str[i] == 'e' || str[i] == 'E')
str[i] = '3';
else if (str[i] == 'g' || str[i] == 'G')
str[i] = '6';
else if (str[i] == 'i' || str[i] == 'I')
str[i] = '1';
else if (str[i] == 'o' || str[i] == 'O')
str[i] = '0';
else if (str[i] == 's' || str[i] == 'S')
str[i] = '5';
else if (str[i] == 't' || str[i] == 'T')
str[i] = '7';
i++;
}
return (str);
}
