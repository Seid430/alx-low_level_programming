#include "main.h"
/**
 *print_numbers - print number
 *Return: always zero
 *
 *
 */
void print_numbers(void);
{
	int a = 0;

	while (a <= 9)
	{
		_putchar("%d", a);
		a++;
	}
	_putchar("\n");
	return (0);


}
