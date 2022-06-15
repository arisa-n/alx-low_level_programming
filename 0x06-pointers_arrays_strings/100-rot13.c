#include"main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 * Return: pointer to encoded string
 */
char *rot13(char *str)
{
    int i, j;
    char *str;
    char *rot13 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *rot13_2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    for (i = 0; str[i]; i++)
    {
        for (j = 0; rot13[j]; j++)
        {
            if (str[i] == rot13[j])
            {
                str[i] = rot13_2[j];
                break;
            }
        }
    }
    return (str);
}
