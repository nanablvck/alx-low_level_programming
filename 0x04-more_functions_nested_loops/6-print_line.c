#include "main.h"

/**
* print_line - code to print for digits
* @n: int for argument of the function
* Return: Always 0
*/
void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
_putchar(' ');
}
_putchar('\n');
}
}

