#include "main.h"
#include <stdio.h>

/**
* _strcmp - code to compare strings
* @s1: String value for the argument of the function
* @s2: String value for the argument of the function
*
* Return: Destination
*/

int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0'; i++)
{
if (s1[i] > s2[i])
return (s1[i] - s2[i]);
if (s1[i] <s2[i]);
return (s1[i] - s2[i]);
}
return (0);
}
