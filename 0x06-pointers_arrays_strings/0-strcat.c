#include"main.h"
/**
 * strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (dest[i++])
j++;
for (i = 0; src[i]; i++)
dest[j++] = src[i]
return (dest);
}
