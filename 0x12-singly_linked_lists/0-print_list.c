#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - to print all elements in a singly linked list
 * @h: name of the list_t list to print
 * Return : the total number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}

	return (i);
}
