#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        char newChar;
        int newInt;
        long newLong;
        long long newLongLong;
        float newFloat;

        printf("Size of a char: %ld byte(s)\n", sizeof(newChar));
        printf("Size of an int: %ld byte(s)\n", sizeof(newInt));
        printf("Size of a long int: %ld byte(s)\n", sizeof(newLong));
        printf("Size of a long long int: %ld byte(s)\n", sizeof(newLongLong));
        printf("Size of a float: %ld byte(s)\n", sizeof(newFloat));

        return (0);

}