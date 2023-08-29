#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a listin_len list
 * @h: points to the head of link list node
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
