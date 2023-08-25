#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints and check the code
 * @h: name of the list_t list to print
 * Return: the number of nodes of h
 */
size_t print_list(const list_t *h);
{
	size_t size = 0;

	while (h)
	{
	if (h->str == NULL)
	{
	printf("[0] (nil)\n");
	}
	else
	{
		printf("[%zu] %s\n", h->len, h->str);
	}
	size++;
	h = h->next;
	}
	return (size);
}
