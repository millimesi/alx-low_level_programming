#include "main.h"

/**
 * factorial - factorial of num
 * @n: num
 *
 * Return: fact of num
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
