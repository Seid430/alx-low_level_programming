#include "main.h"
/**
 *_strchr - functions name
 *@s: - parameter
 *@c: parameter
 *Return: something
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
			return ('\0');

}
