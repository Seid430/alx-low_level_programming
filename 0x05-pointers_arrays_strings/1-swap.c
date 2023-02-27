#include "main.h"
/**
 * swap_int - funcions name
 * @a: integer number
 * @b: integer number
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
