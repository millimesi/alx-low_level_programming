#include <stdlib.h>
/**
 * int_index - returns the existance of num index
 * @array: array
 * @size: arryay size
 * @cmp: function pointer
 *
 * Description - returns index num
 * Return: the index num
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, value;

	if (cmp == NULL)
		return (-1);
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		value = cmp(array[i]);
		if (value != 0)
		{
			return (i);
		}
	}
	return (-1);
}
