#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies tow num
 * @argc: arg
 * @argv: array of arg
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int mul, i, r;
if (argc == 3)
{
	i = atoi(argv[1]);
	r = atoi(argv[2]);
	mul = i * r;
	printf("%d\n", mul);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
