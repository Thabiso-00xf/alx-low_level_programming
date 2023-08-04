#include "main.h"
/**
* _strspn - gets the length of a prefix substring.
* @s: initial segment.
* Return: the number of accepted bytes.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int x, j, bool;

for (x = 0; *(s + x) != '\0'; x++)
{
bool = 1;
for (j = 0; *(accept + j) != '\0'; j++)
{
if (*(s + x) == *(accept + j))
{
bool = 0;
break;
}
}
if (bool == 1)
break;
}
return (x);
}
