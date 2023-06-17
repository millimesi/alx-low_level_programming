#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array
 * @size: size of the array
 * @c: initialization char
 *
 * Description - create a specific size of array initialize it with c
 * Return: array pointer
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *arr;

		arr = malloc(size * sizeof(char));
		if (arr != NULL)
		{
			int i;

			for (i = 0; i < size; i++)
			{
				arr[i] = c;
			}
		}
		return (arr);
	}
}
