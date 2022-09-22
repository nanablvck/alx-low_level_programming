#include "main.h"

/**
* print_square - a function that draws a square on the terminal
* @size: input number of times '/' shoild be printed
* Return: a square
*/
void print_square(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

