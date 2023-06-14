#include <stdio.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argumets arrey of string ponters
 *
 * Description - uses argc and *argV[] to give the name of the file
 * Return: 0 up on success
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
