#include "main.h"
/**
 * _strlen - returns the lengh of a string
 * @s: string
 * Return: 0
 */
int _strlen(char *s)
{
	int count = 0, i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*s != ' ')
		{
			count++;
		}
	}
	return (count);
}
