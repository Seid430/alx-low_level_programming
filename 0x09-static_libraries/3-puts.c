#include "main.h"
/**
 * _puts - writes a function that prints a string to the standard output
 * @str: string
 * Return: 0
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
	_putchar(*str);
}
_putchar('\n');
}
