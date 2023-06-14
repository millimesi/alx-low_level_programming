#include <stdio.h>
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
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
