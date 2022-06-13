#include"main.h"
#include <stdio.h>
/**
 * print_array - function that prints an array of integers
 * @a: pointer to the array
 * @n: number of elements in the array
 * Return: nothing
 */
void print_array(int *a, int n)
{
int i;
i = 0;
while (i < n)
{
printf("%d\n", a[i]);
printf(", ");
i++;
}
}
