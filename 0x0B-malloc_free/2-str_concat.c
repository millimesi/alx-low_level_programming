#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: is first string
 * @s2: is the second string
 *
 * Description - create a string pointer that is capable to hold both strings
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	char *string;
	int size, i = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	int j = 0;

	while (s2[j] != '\0')
	{
		j++;
	}
	size = i + j;
	string = malloc((size + 1) * (sizeof(char)));
	if (string != NULL)
	{
		int l;

		for (l = 0; l < size; l++)
		{
			string[l] = s1[l];
		}
		for (l = 0; l < size; l++)
		{
			string[i + l] = s2[l];
		}
			string[size] = '\0';
		return (string);
	}
}
