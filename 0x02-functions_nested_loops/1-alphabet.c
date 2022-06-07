#include<stdio.h>
#include"main.h"
/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		{
		_putchar(i);
		}
		_putchar('\n');
}
