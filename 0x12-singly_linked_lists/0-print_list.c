#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * print_list - print content of the lisr
 * @h: head pointer
 *
 * Description - pprints the content of lists
 * Return: size of the lisr
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t size = 0;

	if (h == NULL)
		printf("list is emppty\n");
	while (ptr != NULL)
	{
		size++;
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
	}
	return (size);
}
