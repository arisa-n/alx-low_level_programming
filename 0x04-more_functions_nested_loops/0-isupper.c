#include"main.h"
/**
 * is_uppercase - checks if a character is uppercase
 * @c: character to check
 * Return: 1 if c is uppercase, 0 otherwise
 * Description: Checks if c is uppercase
 */
int is_uppercase(char c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
