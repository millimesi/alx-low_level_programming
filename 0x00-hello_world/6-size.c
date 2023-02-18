#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	printf("size of a char: %zu bytes\n", sizeof(char));
	printf("size of a int: %zu bytes\n", sizeof(int));
	printf("size of a long int: %zu bytes\n", sizeof(long int));
	printf("size of a long long int: %zu bytes\n", sizeof(long long int));
	printf("size of a float: %zu bytes\n", sizeof(float));
	return (0);
}
