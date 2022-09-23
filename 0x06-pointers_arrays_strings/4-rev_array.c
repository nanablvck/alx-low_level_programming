#include <stdio.h>
#include "main.h"

/**
* reverse_array - Code to reverse an array
* @a: int value for the argument of the function
* @n: int value for the argument of the function
*
* Return: void
*/
void reverse_array(int *a, int n)
{
int i = 0;
int temp;

while (i < n)
{
temp = a[i];
a[i] = a[n - 1];
a[n - 1] = temp;
i++;
n--;
}
}
