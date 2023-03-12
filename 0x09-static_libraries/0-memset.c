#include "main.h"
/**
**_memset - fill memory with a constsnt
*@s: char
*@b: char2
*@n: Int
*Return: 0
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
