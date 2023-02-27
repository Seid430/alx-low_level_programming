#include "main.h"
#include <stdio.h>
/**
 *print_array - name of the function
 *@a: name of the parameter
 *@n: name of the parameter
 */
void print_array(int *a, int n)
{
	int j, k;

	k = (n - 1);
	for (j = 0; j <= k; j++)
	{
		if (j != k)
		{
			printf("%d, ", *(a + j));
		}
		else
		{
			printf("%d", *(a + j));
		}
	}
	printf("\n");
}
