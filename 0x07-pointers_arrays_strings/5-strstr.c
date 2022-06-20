#include"main.h"
/**
 * _strstr - locate a substring
 * @haystack: The string to search
 * @needle: The substring to search for
 * Return: pointer to the first occurrence of @needle in @haystack
 * or NULL if @needle is not found
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j, k;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (needle[j] == '\0')
return (&haystack[i]);
}
return (NULL);
}
