#include "main.h"
/**
 * _strcpy - the function neme
 * @dest: something
 * @src: lsojg
 * Return: dest
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
