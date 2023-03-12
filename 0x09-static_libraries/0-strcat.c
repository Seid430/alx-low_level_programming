#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: first string
 *@src: second string
 *Return: 0
 */
char *_strcat(char *dest, char *src)
{
int r = 0;
int count = 0;
while (dest[r++])

{

count++;
}

for (r = 0; src[r]; r++)
{

dest[count++] = src[r];

}

return (dest);
}
