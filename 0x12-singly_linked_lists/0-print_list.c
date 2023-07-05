#include <stdio.h>
#include "lists.h"

/**
 * print_list - print list 
 * @h: head pointer 
 *
 * Return: pointer 
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
	 n++;
	 h = h->next;
	}
	return (n);
}
