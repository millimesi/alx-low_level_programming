#include <stdlib.h>
#include "lists.h"

/**
 * list_len - size 
 * @h: head pointer
 *
 * Return: size 
 */
size_t list_len(const list_t *h)
{
	size_t l = 0;

 while (h)
 {
	 l++;
	 h = h->next;
 }
 return (l);
}

