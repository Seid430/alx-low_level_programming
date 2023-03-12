#include "main.h"
/**
 * *_strchr - name
 * @s: pointer var
 * @c: char
 * Return: 0
 */
char *_strchr(char *s, char c)
{
unsigned int r;


for (r = 0; s[r] >= '\0'; r++)
{
	if (s[r] == c)
	{
	return ((s + r));
	}
}
return ('\0');
}
