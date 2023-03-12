#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: intiger
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
int r = 0;
int count = 0;
while (dest[r++])

{

	count++;
}

for (r = 0; src[r] && r < n; r++)
{

	dest[count++] = src[r];

}



return (dest);
}
