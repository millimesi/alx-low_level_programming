#include "main.h"
#include<stdio.h>
/**
 * print_array- print elements of array integers.
 * @a:nmae of arraay.
 * @n:sizw of array.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
