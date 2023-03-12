#include "main.h"
/**
 *_strcpy - copies a string
 *@dest: a buffer
 *@src: a pointer
 *Return: 0
 */

char *_strcpy(char *dest, char *src)
{
char *a;
char *b;
a = dest;
b = src;

while (*b != '\0')
{
*a = *b;
a++;
b++;
}
*a = '\0';
return (dest);
}
