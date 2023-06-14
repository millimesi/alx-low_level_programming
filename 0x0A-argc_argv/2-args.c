#include <stdio.h>
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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
