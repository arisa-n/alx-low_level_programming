#include"main.h"
/**
 * _strncpy - copies at most n bytes from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i])
dest[i++] = src[i];
while (i < n)
dest[i++] = '\0';
return (dest);
}
