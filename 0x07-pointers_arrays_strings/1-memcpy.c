#include "main.h"
/**
 *_memcpy - name of this function
 *dest: destination of copied file
 *src: source of the file to be copied
 *n: number of memory bytes
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src);
	}
	return (dest);

}
