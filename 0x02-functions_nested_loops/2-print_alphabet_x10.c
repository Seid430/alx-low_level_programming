#include"main.h"
/**
 *print_alphabet_x10 - 10 times alphabet in small case
 *Return: nothing men
 */
void print_alphabet_x10(void)
{
char i, j = 1;

while (j <= 10)
{
	i = 'a';
	while (i <= 'z')
	{
		_putchar (i);
		i++;

	}
	_putchar('\n');
		j++;



}



}
