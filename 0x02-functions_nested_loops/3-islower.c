#include <stdio.h>
#include "main.h"

/**
* _isLower - check the code for ALX School Students
* @c: parameter the int will use to check for the argument of the function
* Return: Always 0
*/
int _isLower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
