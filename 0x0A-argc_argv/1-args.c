#include <stdio.h>
#include "main.h"
/**
 * main - prints the num of arg passed into it
 * @argc: no of arg
 * @argv: array of arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;


	printf("%d\n", argc - 1);

	return (0);
}
