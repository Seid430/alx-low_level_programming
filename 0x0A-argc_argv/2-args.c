#include <stdio.h>
#include "main.h"
/**
 * main - prints all arg it receives
 * @argc: arg no
 * @argv: array of arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);

}
