#include"main.h"
/**
 * strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
int a, b;
a = 0;
for (b = 0; dest[b] != '\0'; b++)
while (src[a] != '\0')
{
dest[b + a] = src[a];
a++;
}
return (dest);
}
