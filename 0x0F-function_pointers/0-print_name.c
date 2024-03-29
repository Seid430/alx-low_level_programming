#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a name
 * @name: name
 * @f: function
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}
