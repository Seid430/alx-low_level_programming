#include "main.h"
/**
 * _strcat - name of our function
 * Return: char dest
 * @dest: -lkjga
 * @src: source
 */

char *_strcat(char *dest, char *src)
{
int length, j;

length = 0;
while (dest[length] != '\0')
{
length++;
}
for (j = 0; src[j] != '\0'; j++, length++)
{
dest[length] = src[j];
}
dest[length] = '\0';
return (dest);
}
/*
char *_strcat(char *dest, char *src)
{
	char i, j;

	i = 0;
	j = 0;
	while(c[i] != '\0')
	{
		i++;
	}
	while(d[j] != '\0')
	{
		c[i] = d[j];
		i++;
		j++;
	}
	c[i] = '\0';
	return (c);
}*/