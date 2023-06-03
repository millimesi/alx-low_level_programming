#include "main.h"
/**
 * _isupper - identifies upper case letters
 * @c: character to be checked
 *
 * Description: it recieves int and returns int if a letter is upper
 *  case or not
 * Return: 1 if it is uppercase or 0 if its not
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
