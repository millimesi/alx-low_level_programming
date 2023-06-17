#include "main.h"
#include <stdlib.h>
/**
 * _strdup - creates array
 * @str: input string
 *
 * Description - create a specific size of array initialize it with c
 * Return: string
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		char *string;
		int i = 0;

		while (str[i] != '\0')
		{
			i++;
		}
		string = malloc((i + 1) * (sizeof(char)));
		if (string != NULL)
		{
			int j;

			for (j = 0; j < i; j++)
			{
				string[j] = str[j];
			}
			string[i] = '\0';
		}
		return (string);
	}
}
