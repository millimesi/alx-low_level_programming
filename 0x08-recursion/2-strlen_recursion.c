#include "main.h"
/**
 * _strlen_recursion - give string length
 * @s: string
 *
 * Return: strlen
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
