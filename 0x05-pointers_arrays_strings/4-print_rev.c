#include "main.h"
/**
 * print_rev - name of this particular function
 * @s: name of this variable
 * Return: none
 */
void print_rev(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
	;
for (i = i - 1; s[i] != 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
