#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - returned the num in the linked lists and checks code
 * @h: name of the list
 * Return: the num of nodes of h
 */

size_t list_len(const list_t *h);

{
	size_t num = 0

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
