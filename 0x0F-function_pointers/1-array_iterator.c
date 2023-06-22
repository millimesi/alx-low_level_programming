#include <stdlib.h>
/**
 * array_iterator - makes iteration
 * @array: an array of int
 * @size: size of the array
 * @action: function pointer
 *
 * Description - makes iteration
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
