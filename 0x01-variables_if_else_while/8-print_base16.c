#include <stdio.h>
/*
 * main - base 16 numbers
 * Result: zero
 */
int main(void)
{
	int num;

	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
