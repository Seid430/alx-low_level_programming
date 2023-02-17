#include<stdio.h>
/**
 *main - Print most alphabets in lowercase
 *Return: Zero
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
