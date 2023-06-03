#include "main.h"
/**
 * _isdigit - idetifies digit
 * @c: character to be checked
 *
 * Description: idetifies an input to be digit or not
 * Return: 1 if its digit or 0 if not
 */
int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
