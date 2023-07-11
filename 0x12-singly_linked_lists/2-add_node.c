#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>
/**
 * add_node - print content of the lisr
 * @head: head pointer
 * @str: string
 *
 * Description - pprints the content of lists
 * Return: size of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	if (head == NULL)
	{
		list_t *ptr1 = *head;

		ptr1->str = strdup(str);
		ptr1->len = strlen(str);
		ptr1->next = NULL;
		return (ptr1);
	}
	else
	{
		list_t *ptr = malloc(sizeof(list_t));

		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr->str = strdup(str);
		ptr->len = strlen(str);
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
}
