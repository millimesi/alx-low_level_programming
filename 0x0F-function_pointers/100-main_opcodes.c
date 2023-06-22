#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: arg num
 * @argv: arg list of array
 *
 * Return: 0 up on success 
 */
int main(int argc, char *argv[])
{
	int memo, i;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	memo = atoi(argv[1]);

	if (memo < 0)
	{
		printf("Error\n");
		exit(2);
	}

	a = (char *)main;

	for (i = 0; i < memo; i++)
	{
		if (i == memo - 1)
		{
			printf("%02hhx\n", a[i]);
			break;
		}
		printf("%02hhx ", a[i]);
	}
	return (0);
}
