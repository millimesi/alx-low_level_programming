#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argumets arrey of string ponters
 *
 * Description - uses argc and *argV[] to give to tell argumet number passede
 * Return: 0 up on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("Error\n");
	else 
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		long int result;
		result = a * b;
		printf("%ld\n", result);
	}
	return (0);
}
