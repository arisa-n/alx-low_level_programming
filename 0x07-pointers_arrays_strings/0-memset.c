#include"main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: The memory area to fill
 * @b: The byte to use
 * @n: The number of bytes to fill
 * Return: pointer to @s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
