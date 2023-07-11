#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * list_len - print content of the lisr
 * @h: head pointer
 *
 * Description - pprints the content of lists
 * Return: size of the list
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t size = 0;

	if (h == NULL)
		printf("list is emppty\n");
	while (ptr != NULL)
	{
		size++;
		ptr = ptr->next;
	}
	return (size);
}
