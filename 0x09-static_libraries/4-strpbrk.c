#include "main.h"
/**
 * *_strpbrk - searchs a string for any of bytes
 * @s: string
 * @accept: string2
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
