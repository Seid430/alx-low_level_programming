#include "main.h"
#include <stdlib.h>
/**
 *create_array - name of the function that creates the array
 *@size:- size of the array char to be created
 *@c:- every component of the char
 *Return: char value
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		a[i] = c;
	if (a == NULL)
		return (NULL);
	return (a);
}
