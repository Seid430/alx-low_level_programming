#include "main.h"
/**
 * *_memcpy - name of func
 * @dest: destination
 * @src: source
 * @n: intiger
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
	{
	dest[r] = src[r];
	}
	return (dest);
}
