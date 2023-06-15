#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argumets arrey of string ponters
 *
 * Description - uses argc and *argV[] to prints every argument passed
 * Return: 0 up on success
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		int i, j, len;
		int l;
		int sum;

		for (i = 1; i < argc; i++)
		{
			len = strlen(argv[i]);
			for (j = 0; j < len; j++)
			{
				char member = argv[i][j];

				if (isdigit(member) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		sum = 0;
		for (l = 1; l < argc; l++)
		{
			int xl = atoi(argv[l]);

			sum = sum + xl;
		}
		printf("%d\n", sum);
	}
	return (0);
}
