#include"main.h"
/**
 * _strchr - locate a character in a string
 * @s: The string to search
 * @c: The character to search for
 * Return: pointer to the first occurrence of @c in @s
 * or NULL if @c is not found
 */
char *_strchr(char *s, char c)
{
unsigned int i;
for (i = 0; s[i] != '\0'; i++)
if (s[i] == c)
return (&s[i]);
return (NULL);
}
