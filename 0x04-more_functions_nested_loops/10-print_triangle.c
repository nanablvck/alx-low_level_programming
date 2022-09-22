#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* print_triangle - code to print triangle
* @size: int for argument of the function
* Return: Always 0
*/
void print_triangle(int size)
{
int i;
int j;
int k;

if (size <= 0)
{
_putchar('\n');
}

for (i = 0; i <= (size - 1); i++)
{
for (j = 0; j < (size - 1) - i; j++)
{
_putchar(' ');
}
for (k = 0; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}

