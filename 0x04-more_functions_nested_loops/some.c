#include<stdio.h>
int main(void)
{
	int j;

	for (j = 0; j <= 14; j++)
       	{
		if (j > 9)
	       	{
			putchar((j / 10) + '0');
	       	}
		putchar((j % 10) + '0');
       	}
}
